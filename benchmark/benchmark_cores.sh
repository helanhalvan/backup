#!/bin/bash



#echo $w;
rm cores.txt
for i in {1..64} # {10,20,40,80,400,800,2000,4000}
do
echo $i
bb="$(./main.enc.run 4000_scenario.xml 0 16 --ponythreads $i | egrep -o 'TIME:[0-9]+' | egrep -o '[0-9]+')"
aa="$(./demo 4000_scenario.xml --timing-mode --implementation=parallel --collision --heatmap=disabled --nthreads ${i} | egrep -o 'TIME:[0-9]+' | egrep -o '[0-9]+')"
for j in {1..10}
do
b="$(./main.enc.run 4000_scenario.xml 0 16 --ponythreads $i | egrep -o 'TIME:[0-9]+' | egrep -o '[0-9]+')"
a="$(./demo 4000_scenario.xml --timing-mode --implementation=parallel --collision --heatmap=disabled --nthreads ${i} | egrep -o 'TIME:[0-9]+' | egrep -o '[0-9]+')"

echo "$i $j $a $aa $b $bb"
if (( "$bb" > "$b" )) ; then
bb=$b
fi
if (( "$aa" > "$a" )) ; then
aa=$a
fi
done
echo "$i & $aa & $bb \\" >> "cores.txt"
done
