echo enter a number
read a
s=`expr $a % 5`;
d=`expr $a % 11`;
if [ $s -eq 0 ] && [ $d -eq 0 ]
then
echo number $a is divisible by 5 and 11
else
echo number $a is not divisble by 5 and 11
fi
