echo enter a number
read num

bin=0

while [ $num -gt 0 ]
do
	x=`expr $num % 2`
	bin=`expr $bin \* 10`
	bin=`expr $bin + $x`
	num=`expr $num / 2`
done

echo "Binary :" $bin
