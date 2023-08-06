echo "enter principle amount"
read p
echo "enter rate of interest"
read r
echo "enter time period"
read t
i=`expr $p \* $r \* $t / 100`

echo "simple interst amount = $i"

