
for (( i=0;i<=4;i++))
do 
r=`expr $i % 2`
if [ $r -eq 0 ]
then
	for ((j=0;j<i;j++))	 
	 do
	printf "0"
	done
	 for (( k=0;k<i;k++))
	 do
	printf "1"
	done
	if [ $i -eq 0 ]
	then 
	printf "0"
	fi
	printf "\n"
else
    for ((j=0;j<i;j++))	 
	 do
	printf "1"
	done
	 for (( k=0;k<i;k++))
	 do
	printf "0"
	done
	printf "\n"
fi

done

	
