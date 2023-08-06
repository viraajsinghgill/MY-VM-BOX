#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    int roll, marks[5], i;
    char name[100];
    struct sockaddr_in sa;

    int sockfd = socket(PF_INET, SOCK_STREAM, 0);

    sa.sin_family = PF_INET;
    sa.sin_addr.s_addr = INADDR_ANY;
    sa.sin_port = 60018;
    
    connect(sockfd, (struct sockaddr *)&sa, sizeof(sa));

    printf("Enter roll number (between 1 and 10): ");
    scanf("%d",&roll);
    send(sockfd, &roll, 4, 0);
    
    recv(sockfd, &roll, 4, 0);
    recv(sockfd, name, 100, 0);
    for(i = 0; i < 5; i++)
    {
    	recv(sockfd, &marks[i], 4, 0); 
    }
    
    printf("Details of student sent by server: ");
    printf("\nName: %s", name);
    printf("\nRoll: %d", roll);
    for(i = 0; i < 5; i++)
    {
    	printf("\nMarksin subject -%d: %d", i+1, marks[i]);
    }
    
    close(sockfd);
    return 0;
}

