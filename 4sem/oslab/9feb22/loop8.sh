x=1
until [ $x -eq 100 ]
do
	echo $x
	x=`expr $x + 1`
done
