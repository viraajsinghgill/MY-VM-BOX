echo "enter  3 digit number"
read a

if [ `expr $a % 10` -eq `expr $a / 100` ]
then
echo "palindrome number"
else
echo "not palindrome"
fi
