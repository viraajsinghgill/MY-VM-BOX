#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
	 int ret
	 printf("before fork executes=%d\n",getpid());
	 fork();
	 printf("after fork executes=%d\n",getpid());
	// if(ret>0)
	 //wait(null);
	 return 0;
}
