#include <stdio.h>

int main()
{
    int num;   
    int *pNum; 
 
    pNum=&num;
    num=55;   
 
    printf("Using variable num:\n");
    printf("value of num: %d\naddress of num: %ls\n",num,&num);
    printf("Using pointer variable:\n");
    printf("value of num: %d\naddress of num: %ls\n",*pNum,pNum);
 
   return 0;
}
