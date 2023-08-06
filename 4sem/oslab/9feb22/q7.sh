echo 0
for (( i=0;i<=4;i++))
do 
r=`expr $i % 2`
if [ $r -eq 0 ]
then
	for ((j=0;j<i;j++))	 
	 do
	echo 0
	done
	 for (( k=0;k<i;k++))
	 do
	echo 1
	done
else
    for ((j=0;j<i;j++))	 
	 do
	echo 1
	done
	 for (( k=0;k<i;k++))
	 do
	echo 0
	done
fi

done

	
