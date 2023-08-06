echo enter a number
read c
t=$c
sum=0
r=0
n=0
while [ $t -gt 0 ]
do 	
	r=`expr $t % 10`
	n=`expr $r \* $r \* $r`
	sum=`expr $sum + $n`
	t=`expr $t / 10`
done
if [ $sum -eq $c ]
then
echo armstrong number
else 
echo not armstrong
fi 
