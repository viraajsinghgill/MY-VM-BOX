#include<stdio.h>
struct employee
{
 char name[50];
 char address[100];
 int age;
 float salary;
};
int main()
{int n;
printf("\nenter no. of employee=");
 scanf("%d",&n);
 struct employee b[n];
 int a,sum=0;
 int i;
 for(i=1;i<=n;i++)
 {
   printf("\nenter name ,address,age,salary of employee%d",i);
   scanf("%s \n %s \n %d \n %f",b[i].name,b[i].address,&b[i].age,&b[i].salary);
   sum+=b[i].salary;
 }
  a=sum/n;
  
//for(i=1;i<=n;i++)
//printf("\n%s\n %s \n %d \n %f",b[i].name,b[i].address,b[i].age,b[i].salary);
printf("average salary =%d",a);
return(0);
}
