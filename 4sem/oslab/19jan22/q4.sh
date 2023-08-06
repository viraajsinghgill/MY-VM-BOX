echo "enter the radius of circle"
read r
p=3.14
a=`echo $p \* $r \* $r |bc -l`
echo "area of circle= $a"

