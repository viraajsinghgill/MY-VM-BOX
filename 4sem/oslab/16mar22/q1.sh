echo enter number of process
read a
echo enter arrival time
for (( i=0; i<a ;i++ ))
	do
	echo for process p$i
  	read at[i]
  	printf("%d",at[i])
done

 
