echo "enter two numbers"
read a
read b
a=$((a+b))
b=$((a - b))
a=$((a-b))
echo "after swaping a= $a and b=  $b"
