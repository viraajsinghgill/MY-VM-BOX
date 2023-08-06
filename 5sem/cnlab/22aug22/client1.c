/*
** A datagram "client" demo
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#define SERVERPORT 4952 // the port users will be connecting to
int main()
{
int sockfd;
struct sockaddr_in server_addr; // connector's address information
//struct hostent *he;
int numbytes;
char arg[30];
if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) == -1) {
perror("socket");
exit(1);
}
server_addr.sin_family = AF_INET; // host byte order
server_addr.sin_port = htons(SERVERPORT); // short, network byte order
server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
//memset(server_addr.sin_zero, '\0', sizeof server_addr.sin_zero);
printf("Enter a message\n");
gets(arg);
if ((numbytes = sendto(sockfd, arg, strlen(arg), 0,
(struct sockaddr *)&server_addr, sizeof server_addr)) == -1) {
perror("sendto");
exit(1);
}
printf("sent %d bytes to %s\n", numbytes, inet_ntoa(server_addr.sin_addr));
close(sockfd);
return 0;
}
