#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    int i,length;
    // char buf[100];
    int num;
    struct sockaddr_in sa, ta1;

    int sockfd = socket(PF_INET, SOCK_STREAM, 0);

    sa.sin_family = AF_INET;
    sa.sin_addr.s_addr = INADDR_ANY;
    sa.sin_port = 55656;

    i = bind(sockfd, (struct sockaddr *)&sa, sizeof(sa));
    printf("TEST:%d%d\n", sockfd, i);

    listen(sockfd, 5);

    length = sizeof(sa);
    int fd1 = accept(sockfd, (struct sockaddr *)&ta1, &length);

   
    
    recv(fd1, &num, 4, 0);
    printf("Send by client : %d\n", num);
    
    int r,s=0;
    while(num>0)
    {
    	r = num%10;
    	s=(s*10)+r;
    	num=num/10;
    }
    
    send(fd1,&s,4,0);

    close(fd1);
}
