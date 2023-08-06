#include<stdio.h>
int main(){
int a[]={2,4,3},b[]={5,6,4},f[2];
int e,c=0,d=0;
int n=1;
	for(int i=0;i<=2;i++)
	{ 
		c=c+a[i]*n;
		n=n*10;
		//printf("c=%d\n",c);
		
	}
	printf("c=%d\n",c);
	int v=1;
 	 for(int i=0;i<=2;i++)
	{ 
		d=d+b[i]*v;
		v=v*10;
		
		
	}
	printf("d=%d\n",d);
 	 
 	 e=c+d;
 	 //printf("%d",e);
 	 for(int i=0;i<=2;i++)
 	 {
 	 	f[i]=e%10;
 	 	printf("%d",f[i]);
 	 	e=e/10;
 	 }
 	 
}

