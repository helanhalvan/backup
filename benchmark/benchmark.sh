#!/bin/bash



#echo $w;
for i in {1,3,4,5}

do
echo $i

./benchmark_one.sh $i > $i"data.tex"

done
