#include<stdio.h>
#include<string.h>
struct employee
{
char name[10];
int age;
float salary;

};
int main()
{
struct employee e1={"sanjay",30,55.50};
struct employee e2,e3 ;
e3=e1;
strcpy(e2.name,e1.name);
printf("%s%d%f",e3.name,e3.age,e3.salary);
return(0);
}
