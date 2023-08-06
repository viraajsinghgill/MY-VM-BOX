#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
int p1;
int p2;
int p3;

p2=fork();
if(p2==0)
{
p3=fork();
if(p3==0)
printf("p3:%d parent(p2): %d\n",getpid(),getppid());
else
printf("p2:%d parent(p1): %d\n",getpid(),getppid());
}
else
printf("p1:%d parent: %d\n",getpid(),getppid());
return 0;

}
