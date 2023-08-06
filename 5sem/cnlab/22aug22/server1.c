/*
** A datagram sockets "server" demo
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
#define MYPORT 4952 // the port users will be connecting to
#define MAXBUFLEN 200
int main()
{
int sockfd;
struct sockaddr_in server_addr; // my address information
struct sockaddr_in client_addr; // connector's address information
socklen_t addr_len;
int numbytes;
char buf[MAXBUFLEN];
if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) == -1) {
perror("socket");
exit(1);
}
server_addr.sin_family = AF_INET; // host byte order
server_addr.sin_port = htons(MYPORT); // short, network byte order
server_addr.sin_addr.s_addr = INADDR_ANY; // automatically fill with my IP
//memset(server_addr.sin_zero, '\0', sizeof server_addr.sin_zero);
if (bind(sockfd, (struct sockaddr *)&server_addr, sizeof server_addr) == -1) {
perror("bind");
exit(1);
}
addr_len = sizeof client_addr;
if ((numbytes = recvfrom(sockfd, buf, MAXBUFLEN-1 , 0,
(struct sockaddr *)&client_addr, &addr_len)) == -1) {
perror("recvfrom");
exit(1);
}
printf("got packet from %s\n",inet_ntoa(client_addr.sin_addr));
printf("packet is %d bytes long\n",numbytes);
buf[numbytes] = '\0';
printf("packet contains \"%s\"\n",buf);
close(sockfd);
return 0;
}
