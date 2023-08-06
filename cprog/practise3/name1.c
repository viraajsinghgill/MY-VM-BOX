#include<stdio.h>
int main()
{ int i,j;
int ar[]={3,4,5,6,7,9}, t[5];
//char cr[5];
for(i=0;i<6;i++)

{ 
for(j=0;j<6;j++)
{
t=ar[i];
ar[i]=ar[j];
ar[j]=t;
 //for(j=0;j<6;j++) { t[j]=ar[i];
  }
}
printf("your reverse name %d",t[j]);
return 0;

}
