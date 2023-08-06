echo "enter value of a and b"
read a
read b

f=`expr $a + $b`
c=`expr $a \* $b`
d=`expr $a / $b`
e=`expr $a - $b`
echo "addition= "$f 
echo "multiplication= "$c
echo "division= "$d
echo "subtraction= "$e

