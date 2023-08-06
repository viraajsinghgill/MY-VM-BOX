#include<stdio.h>
#include<string.h>
int length (char*s)
{
 int k=-1;
 while(s[++k]);
 return k;
 
}
//int con(s1[100],s2[100],ch)
//{


//}
int main()
{
 char s1[100],s2[100],ch;
  int i,j;
  char a1,b1;
  //con(a1,b1);
printf("enter first string :");
scanf("%s",s1);
 scanf("%c",&ch);
printf("\nenter second string :");
scanf("%s",s2);
  i=0;
  j=length(s1);
  while(s1[j++]=s2[i++]);
  printf("after concatenation: %s",s1);
  return(0);

}
