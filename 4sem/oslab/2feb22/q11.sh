echo enter number 1
read a
echo enter number 2
read b
echo "instructions:
      1) for addition
      2) for multiplication
      3) for division
      4) for subtraction"
f=`expr $a + $b`
c=`expr $a \* $b`
d=`expr $a / $b`
e=`expr $a - $b`
echo "enter an number of airthmetic operation you want to run"
read s
case $s in
1)
echo addition= $f
;;
2)
echo multiplication= $c
;;
3)
echo division= $d
;;
4)
echo subtraction= $e
;;

*)
echo invalid input
;;
esac

