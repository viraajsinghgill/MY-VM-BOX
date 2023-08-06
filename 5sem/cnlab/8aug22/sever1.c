#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <string.h>

struct student
    {
    	int roll;
    	char name[100];
    	int marks[5];
    } s[5];
    
int main()
{
    int i, j, length;
    int num;
    struct sockaddr_in sa, ta1;
    	
    int sockfd = socket(PF_INET, SOCK_STREAM, 0);

    sa.sin_family = AF_INET;
    sa.sin_addr.s_addr = INADDR_ANY;
    sa.sin_port = 60018;

    i = bind(sockfd, (struct sockaddr *)&sa, sizeof(sa));
    printf("test: %d%d\n", sockfd, i);

    listen(sockfd, 5);

    length = sizeof(sa);
    int fd1 = accept(sockfd, (struct sockaddr *)&ta1, &length);
    
    for(i = 0; i < 10; i++)
    {	
    	s[i].roll = i + 1;
    	printf("\nFor roll number %d, \n", s[i].roll);
    	printf("Enter first name: ");
    	scanf("%s", s[i].name);
    	for(j = 0; j < 5; j++)
    	{
	    	printf("Enter marks in subject%d: ", j+1);
	    	scanf("%d", &s[i].marks[j]);
	}
    }

    recv(fd1, &num, 4, 0);
    printf("\nRoll sent by client: %d\n", num);
    
    for(i = 0; i < 10; i++)
    {
    	if(s[i].roll == num)
    	{
    	 	send(fd1,&s[i].roll,4,0);
    	 	send(fd1,s[i].name,100,0);
    	 	for(j = 0; j < 10; j++)
    		{
    	 		send(fd1,&s[i].marks[j],4,0);
    	 	}
    	}
    }

    close(fd1);
    return 0;
    }
    
