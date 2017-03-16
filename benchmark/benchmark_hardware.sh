#!/bin/bash



#echo $w;
for i in {10,20,40,80,400,800,2000,4000}

do
echo $i

./benchmark_encore.sh $i 4 > $i"encoredata.tex"
./benchmark_openmp.sh $i 4 > $i"openmpdata.tex"
done
