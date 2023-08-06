echo  enter number
read n[5]
for ((i=0;i<5;i++))
do
	if [ $i -eq 1 ]
	then 
	t=$n[0];
	$n[0]=$n[3];
	$n[3]=t;
	fi
echo $n[i]
done

