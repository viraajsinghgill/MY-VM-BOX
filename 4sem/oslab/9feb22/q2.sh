echo enter a number
read n
sum=0
temp=n
while(( n ))
do 
	i=1
	fact=1
	rem=`expr $n % 10`
	while((i<=rem))
	do 
		fact=`expr $fact * $i`
		i++
	done
	sum=`expr $sum + $fact`
	n=`expr $n / 10`
done
if [ $sum -eq temp ]
then 
echo strong number
else 
echo not strong number
fi
