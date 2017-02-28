#!/bin/bash



w="./demo ${1}_scenario.xml --timing-mode --implementation=parallel --collision --heatmap=disabled"
{ { perf stat -x -all-cpus -d -d $w ; } 2> temporaryfiletxt ; } > temptimes

cat temptimes
cat temporaryfiletxt
