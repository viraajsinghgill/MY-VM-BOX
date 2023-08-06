echo enter side 1
read a
echo enter side 2
read b
echo enter side 3
read c
if [ `expr $a + $b` -gt $c  ] && [ `expr $a + $c` -gt $b  ] && [ `expr $b + $c` -gt $a  ]
then 
 echo triangle is valid
 else
 echo triangle is not valid
 fi
