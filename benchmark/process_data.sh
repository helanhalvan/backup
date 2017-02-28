encore=""
openmp=""
for i in {10,20,40,80,400,800,2000,4000}

do
#cat ${i}data.tex
encore="$(cat ${i}encoredata.tex) $encore"
openmp="$(cat ${i}openmpdata.tex) $openmp"
done
#echo $l

rm data_master.txt

val="$(echo $encore | egrep -o '\([[:alnum:][:space:],0-9]+\)' | egrep -o '[0-9]+' | tr '[\n\r\t\v]' '\t')"

echo 'agent-count' $val
{ echo 'agent-count' $val ; } >> "data_master.txt"

val="$(echo $encore | egrep -o '\) [0-9]+ seconds' | egrep -o '[0-9]+' | tr '[\n\r\t\v]' '\t' )"
echo $val
{ echo 'Encore-Runtime' $val ; } >> "data_master.txt"

val="$(echo $openmp | egrep -o 'OPENMP [0-9]+ seconds' | egrep -o '[0-9]+' | tr '[\n\r\t\v]' '\t' )"
echo $val
{ echo 'OpenMP-Runtime' $val ; } >> "data_master.txt"

val="$(echo $encore | egrep -o 'task-clock[-[:alnum:]0-9]+,[0-9][0-9]' | egrep -o '[0-9]+,[0-9][0-9]' | tr '[\n\r\t\v]' '\t' )"
echo 'task-clock' $val
{ echo 'encore-task-clock' $val ; } >> "data_master.txt"

val="$(echo $openmp | egrep -o 'task-clock[-[:alnum:]0-9]+,[0-9][0-9]' | egrep -o '[0-9]+,[0-9][0-9]' | tr '[\n\r\t\v]' '\t' )"
echo 'task-clock' $val
{ echo 'openmp-task-clock' $val ; } >> "data_master.txt"

val="$(echo $encore | egrep -o 'branch-misses[-[:alnum:]0-9]+,[0-9][0-9]' | egrep -o '[0-9]+,[0-9][0-9]' | tr '[\n\r\t\v]' '\t' )"
echo $val
{ echo 'encore-branch-miss-%' $val ; } >> "data_master.txt"

val="$(echo $openmp | egrep -o 'branch-misses[-[:alnum:]0-9]+,[0-9][0-9]' | egrep -o '[0-9]+,[0-9][0-9]' | tr '[\n\r\t\v]' '\t' )"
echo $val
{ echo 'encore-branch-miss-%' $val ; } >> "data_master.txt"

val="$(echo $encore | egrep -o 'LLC-load-misses[-[:alnum:]0-9]+,[0-9][0-9]' | egrep -o '[0-9]+,[0-9][0-9]' | tr '[\n\r\t\v]' '\t' )"
echo $val
{ echo 'Encore-LLC-load-misses' $val ; } >> "data_master.txt"

val="$(echo $openmp | egrep -o 'LLC-load-misses[-[:alnum:]0-9]+,[0-9][0-9]' | egrep -o '[0-9]+,[0-9][0-9]' | tr '[\n\r\t\v]' '\t' )"
echo $val
{ echo 'openmp-LLC-load-misses' $val ; } >> "data_master.txt"

val="$(echo $encore | egrep -o 'L1-dcache-load-misses[-[:alnum:]0-9]+,[0-9][0-9]' | egrep -o '[0-9]+,[0-9][0-9]' | tr '[\n\r\t\v]' '\t' )"
echo $val
{ echo 'encore-L1-dcache-load-misses' $val ; } >> "data_master.txt"

val="$(echo $openmp | egrep -o 'L1-dcache-load-misses[-[:alnum:]0-9]+,[0-9][0-9]' | egrep -o '[0-9]+,[0-9][0-9]' | tr '[\n\r\t\v]' '\t' )"
echo $val
{ echo 'openmp-L1-dcache-load-misses' $val ; } >> "data_master.txt"

val="$(echo $encore | egrep -o 'L1-icache-load-misses[-[:alnum:]0-9]+,[0-9][0-9]' | egrep -o '[0-9]+,[0-9][0-9]' | tr '[\n\r\t\v]' '\t' )"
echo $val
{ echo 'encore-L1-icache-load-misses' $val ; } >> "data_master.txt"

val="$(echo $openmp | egrep -o 'L1-icache-load-misses[-[:alnum:]0-9]+,[0-9][0-9]' | egrep -o '[0-9]+,[0-9][0-9]' | tr '[\n\r\t\v]' '\t' )"
echo $val
{ echo 'openmp-L1-icache-load-misses' $val ; } >> "data_master.txt"

q="$(cat data_master.txt)"

echo "$q" | tr ',' '.' > data_master.txt
