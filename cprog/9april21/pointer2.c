#include<stdio.h>
int main()
{
  char *p[5];
  char a[]="yudhistir",b[]="bhim",c[]="arjun",d[]="nsahadev",e[]="sahadev";
  int i;
  p[0]=a;p[1]=b;p[2]=c;p[3]=d;p[4]=e;
  for(i=0;i<5;i++)
  {
  
  printf("%s\n",p[i]);
  }
}
