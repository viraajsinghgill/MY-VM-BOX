echo "enter a number"
read num
numcopy=$num
numcopy=`expr $numcopy / 10`
seconddigit=`expr $numcopy % 10`
numcopy=`expr $numcopy / 100`
fourthdigit=`expr $numcopy % 10`
subforth=`expr $fourthdigit \* 1000`
subsecond=`expr $seconddigit \* 10`
addnewfourth=`expr $seconddigit \* 1000`
addnewsecond=`expr $fourthdigit \* 10`



num=`expr $num - $subfourth`
echo $num
num=`expr $num + $addnewfourth`
echo $num
num=`expr $num - $subsecond`
echo $num
num=`expr $num + $addnewsecond`
echo "$num"
