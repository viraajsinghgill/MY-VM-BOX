echo enter a number
read num
rev=0

while [ $num -gt 0 ]
do
	x=`expr $num % 10`
	rev=`expr $rev \* 10`
	rev=`expr $rev + $x`
	num=`expr $num / 10`
done

echo "the reverse number is :" $rev

