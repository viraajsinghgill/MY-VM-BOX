echo "enter number"
read a;
if [ `expr $a / 10` -eq 0 ]
then
echo single digit

elif [ `expr $a / 100 ` -eq 0 ]
then
echo double digit
elif [ `expr $a / 1000 ` -eq 0 ]
then
echo triple digit
fi
