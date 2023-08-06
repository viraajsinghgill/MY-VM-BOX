#include<stdio.h>
#include<stdlib.h>
//# define n 100;
//void small(int ar[n],int n);
void small(int ar[],int n)
{
	int s=ar[0];
	for(int i=1;i<n;i++)
	{
		if(ar[i]<s)
		s=ar[i];
		
		
	}
	printf("\nsmallest number: %d\n",s);
	
}
void large(int ar[],int n){
int l=ar[0];
for(int i=1;i<n;i++){
if(ar[i]>l)
l=ar[i];
}
printf("largest numeber: %d\n",l);
}

int main(){
int ar[100],n;
printf("enter the number of numbers to be add in array:");
scanf("%d",&n);
for(int i =0;i<n;i++)
{
  ar[i]=rand() % 100;
  
}
for(int i=0;i<n;i++)
{
printf(" %d",ar[i]);
}
small(ar,n);
large(ar,n);
}
