echo enter num
read  num

a=$num
rev=0

while [ $a -gt 0 ]
do
	x=`expr $a % 10`
	rev=`expr $rev \* 10`
	rev=`expr $rev + $x`
	a=`expr $a / 10`
done

flag=0
x=2
while [ $x -lt $num ]
do
	rem=`expr $num % $x`
	if [ $rem -eq 0 ]
	then
	flag=1
	
	fi
	x=`expr $x + 1`
done

if [ $flag -eq 0 ]
then
	 if [ $num -eq $rev ] 
	 then
	 echo palindromic prime
	 else
	 echo prime but not palindrome
	 fi
	 else 
	 if [ $num -eq $rev ]
	  then 
	  echo palindrome but not prime
	  else
	  echo neither palindrome nor prime
	  fi
	  
	  
 fi
	 
