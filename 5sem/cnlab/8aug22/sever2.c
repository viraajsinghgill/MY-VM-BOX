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
    int num1, num2;
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
    int fd2 = accept(sockfd, (struct sockaddr *)&ta1, &length);
    
    recv(fd1, &num1, 4, 0);
    recv(fd2, &num2, 4, 0);
    
    printf("Value sent by client 1: %d\n", num1);
    printf("Value sent by client 2: %d\n", num2);
    
    printf("Sending value of client 1 to client 2: %d\n", num1);
    printf("Sending value of client 2 to client 1: %d\n", num2);
    
    send(fd2,&num1,4,0);
    send(fd1,&num2,4,0);

    close(fd1);
    close(fd2);
    return 0;
}

