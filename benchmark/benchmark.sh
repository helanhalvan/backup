#!/bin/bash



#echo $w;
for i in {1,2,3,4}
do
echo $i

./benchmark_one.sh $i >> $i"data.tex" 2>&1

done
