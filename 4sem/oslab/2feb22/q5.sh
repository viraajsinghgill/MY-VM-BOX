echo enter number a
read a
echo enter number b
read b
echo enter number c
read c
if [ $a -gt $b ] && [ $a -gt $c ] 
then
echo a is greater
elif [ $b -gt $a ] && [ $b -gt $c ]
then 
echo b is greater
else
echo c is greater
fi
