#include<stdio.h>
//typedef unsigned char byte;
int main()
{
	int val=7;
	int a,b,c,d;
	a=(val & 0xFF);
	b=((val >> 8) & 0xFF);
	c=((val >> 16) & 0xFF);
		d=((val >> 24) & 0xFF);
	
	printf("a= %02X\n",a);
	printf("b= %02X\n",b);
	printf("c= %02X\n",c);
	printf("d= %02X\n",d);
	return 0;
}
