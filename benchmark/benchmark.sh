#!/bin/bash



#echo $w;
for i in  {10,20,40,80,400,800} #,2000,4000}

do
echo $i

./benchmark_one.sh $i > $i"data.tex"

done
