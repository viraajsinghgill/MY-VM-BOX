echo enter number
read n

count=0
function isprime(){
num=$1
 for(( i=2; i<=$n/2 ; i++ ))
 do
 ans=$(( $num % $i))
 
 if [[ $ans -le "0" ]];
 then
 echo 0
 break
 fi
 done
 echo 1
 
}

while [ $count -lt "5" ]
do 
	prime='isprime $n'
	if [[ $prime -eq "1" ]];
	then
	echo "> $n"
	count=$(($count + 1))
	fi
	n=$(($n + 1))
	
	done
