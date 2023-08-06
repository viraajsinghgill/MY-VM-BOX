#include<stdio.h>
int main(){
int a[]={2,4,3},b[]={5,6,4},f[2];
int e,c=0,d=0;
 	 c=a[2]*100+a[1]*10+a[0]*1;
 	 printf("%d\n",c);
 	  d=b[2]*100+b[1]*10+b[0]*1;
 	 printf("%d\n",d);
 	 e=c+d;
 	 //printf("%d",e);
 	 for(int i=0;i<=2;i++)
 	 {
 	 	f[i]=e%10;
 	 	printf("%d",f[i]);
 	 	e=e/10;
 	 }
 	 
}

