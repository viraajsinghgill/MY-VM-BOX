echo "enter measurement in cm"
read a
t=`expr $a / 100`
s=`expr $a % 100`

echo "after conversion to meters = $t m $s cm"
