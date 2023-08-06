#include<stdio.h>
#include<string.h>
int main()
{
 int i=0;
 char src[20],dst[20];
 
 printf("enter source string :");
 scanf("%s",src);
 
 while(src[i]!='\0')
 dst[i]=src[i++];
dst[i]='\0';
// printf("%c%c",dst[0],dst[1]);
 printf("\ndestination string: %s",dst+1);
 return(0);
 
}
