#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    //char buf[100];
    int val;
    struct sockaddr_in sa;

    int sockfd = socket(PF_INET, SOCK_STREAM, 0);

    sa.sin_family = PF_INET;
    sa.sin_addr.s_addr = INADDR_ANY;
    sa.sin_port = 55656;
    int k = connect(sockfd, (struct sockaddr *)&sa, sizeof(sa));

    //for (int i = 0; i < 100; i++)
    //{
    //    buf[i] = '\0';
    //}
    //recv(sockfd, buf, 100, 0);
    //printf("%s\n", buf);

    //for (int i = 0; i < 100; i++)
    //{
    //    buf[i] = '\0';
    //}
    //strcpy(buf,"Message from client");
    printf("Enter a number : ");
    scanf("%d",&val);
    send(sockfd, &val, 4, 0);
    
    recv(sockfd, &val, 4, 0);
    printf("Reverse number is (send by server) : %d\n",val);
    close(sockfd);
}
