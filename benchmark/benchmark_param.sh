#!/bin/bash



#echo $w;
rm param.txt
for i in {2..20} # {10,20,40,80,400,800,2000,4000}
do
echo $i
bb="$(./main.enc.run 40_scenario.xml 0 ${i} --ponythreads 4 | egrep -o 'TIME:[0-9]+' | egrep -o '[0-9]+')"

for j in {1..25}
do
b="$(./main.enc.run 40_scenario.xml 0 ${i} --ponythreads 4 | egrep -o 'TIME:[0-9]+' | egrep -o '[0-9]+')"

echo "$b & $bb"

if (( "$bb" > "$b" )) ; then
bb=$b
fi
done
r="$(echo "($i*$i) / 64" | bc -l)"
a="$(echo "4000/($i*$i)" | bc -l)"
q="$(echo "($i*$i)" | bc -l)"
echo "$i & $q & $r & $a & $bb" >> "param.txt"
done
