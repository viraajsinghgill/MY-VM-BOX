echo enter marks of 5 subjects
read -p "enter marks of Web Technology          :" a
read -p "enter marks of computer architecture   :" b
read -p "enter marks of digital electronics     :" c
read -p "enter marks of Automata formal language:" d
read -p "enter marks of operating system        :" e
s=`expr $a + $b + $c + $d + $e `
q=`expr $s / 5`
echo your average marks is $q
if [ $q -gt 89 ]
then 
echo your grade is O
elif [ $q -gt 79 ] && [ $q -lt 90 ]
then
echo your grade is E
elif [ $q -gt 69 ] && [ $q -lt 80 ]
then
echo your grade is G
elif [ $q -gt 59 ] && [ $q -lt 70 ]
then
echo your grade is A
elif [ $q -gt 49 ] && [ $q -lt 60 ]
then
echo your grade is B
elif [ $q -gt 32 ] && [ $q -lt 50 ]
then
echo your grade is D
elif  [ $q -lt 33 ]
then
echo you are failed this semester
fi
