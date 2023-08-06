echo "instructions:
      1)to display content of directory
      2)to display name of present working directory
      3)to display date
enter a number"
read a
case $a in
1)
echo " displaying content of directory"
ls
;;
2)
echo " displaying the name of present working directory"
pwd
;;
3)
echo "diplaying the date"
date
;;
*)
echo "invalid input"
;;
esac
