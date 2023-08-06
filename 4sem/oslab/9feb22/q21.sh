echo enter a number:
read num
a=$num
b=0

while [ $a -gt 0 ]
do
	x=`expr $a % 10`
	fact=1
	while [ $x -gt 0 ]
	do
		fact=`expr $fact \* $x`
		x=`expr $x - 1`
	done
	
	b=`expr $b + $fact`
	a=`expr $a / 10`
done
if [ $b -eq $num ] 
then
echo strong number

else
echo not strong number
fi 
