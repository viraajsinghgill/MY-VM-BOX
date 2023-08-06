echo enter a year
read a
x=`expr $a % 4`
y=`expr $a % 100`
z=`expr $a % 400`
if [ $x -eq 0 ] && [ $y -ne 0 ]
then 
echo $a leap year
elif [ $y -eq 0 ] && [ $z -eq 0 ]
then
echo $a is leap year
else
echo $a not leap year
fi
