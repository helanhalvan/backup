#!/bin/bash



#echo $w;
for i in {20,40,80,400,800,4000,8000}
do
echo $i
l=$(time ./main.enc.run $1 ${i}_scenario.xml 0)
echo $l
done
