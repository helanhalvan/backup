#!/bin/bash



#echo $w;
for i in 4

do
echo $i

./benchmark_one.sh $i > $i"data.tex"

done
