echo "enter number"
read n
i=0

while [[ $n -gt 0 ]]
do
digit=`expr $n % 10`
num=`expr $num / 10`
printf "$digit"
done


