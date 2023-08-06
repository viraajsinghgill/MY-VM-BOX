#include<stdio.h>
#include<string.h>
int main()
{
 char b[100] ,ch,i=0,count=0;
 printf("enter a string :");
// gets(b);
scanf("%s",b);
printf("enter a character");
scanf("%c",&ch);
scanf("%c",&ch);

// printf("%c",ch);
 while(b[i])
 if(ch==b[i++])
 ++count;
 printf("frequency of %c=%d",ch,count);
 return(0);


}
