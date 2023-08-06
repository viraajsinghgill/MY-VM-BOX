x=1
until [ $x -gt 100 ]
do
	echo $x
	x=`expr $x + 1`
done
