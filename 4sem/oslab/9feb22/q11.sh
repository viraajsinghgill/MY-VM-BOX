echo "enter a number :"
read c
x=$c

while [ $x -gt 0 ]
do 
	r=`expr $x % 10`
	n=`expr $r \* $r \* $r`
	sum=`expr $sum +$n`
	x=`expr $x / 10`
done
if [ $sum -eq $c ]
then 
	echo "armstrong number"
else
	echo "not armstrong number"
fi 
