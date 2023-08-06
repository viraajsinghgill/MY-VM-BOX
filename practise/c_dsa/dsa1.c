#include<stdio.h>
int main(){
	char name[5][10];
	int roll[5];
	float marks[5];
	for(int i=0;i<5;i++)
	{
	printf("enter the name,roll number, marks of student %d",i+1);
	scanf("%s,%d,%f",name[i],&roll[i],&marks[i]);
	}
	for(int i=0;i<5;i++)
	{
	
	printf("name=%s\nroll number=%d\nmarks=%f\n",name[i],roll[i],marks[i]);
	}
	return 0;
	
}
