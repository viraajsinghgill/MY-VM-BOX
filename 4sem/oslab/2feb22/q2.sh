echo "enter a number"
read a;
s=`expr $a % 2`
if [ $s -eq 0 ]
then
echo "even number"
else
echo "odd number"
fi;

