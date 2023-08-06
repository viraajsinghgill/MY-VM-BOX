#include<stdio.h>

#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
int i,id;
for(i=0;i<3;i++)
id=fork();
if(id==0)
{
printf("process id of the 1st child =%d,m its parent id =%d",getpid(),getppid());

}
else{

wait(null);
printf("parent process id=%d\n",getpid());
break;
}
return 0;
}
