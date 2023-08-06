#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    int val;
    struct sockaddr_in sa;

    int sockfd = socket(PF_INET, SOCK_STREAM, 0);

    sa.sin_family = PF_INET;
    sa.sin_addr.s_addr = INADDR_ANY;
    sa.sin_port = 60018;
    
    connect(sockfd, (struct sockaddr *)&sa, sizeof(sa));

    printf("Enter val: ");
    scanf("%d",&val);
    send(sockfd, &val, 4, 0);
    
    recv(sockfd, &val, 4, 0);
    
    	printf("\nValue sent by server (of client2): %d", val);

    close(sockfd);
    return 0;
}


