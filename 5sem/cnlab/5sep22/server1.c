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
struct sockaddr_in client_addr1;
struct sockaddr_in client_addr2;
 // connector's address information
int numbytes,flag=0;
char buf1[100],buf2[100],mes[100];
if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) == -1) {
perror("socket");
exit(1);
}
server_addr.sin_family = AF_INET; // host byte order
server_addr.sin_port = 60017; // short, network byte order
server_addr.sin_addr.s_addr = INADDR_ANY; // automatically fill with my IP
//memset(server_addr.sin_zero, '\0', sizeof server_addr.sin_zero);
if (bind(sockfd, (struct sockaddr *)&server_addr, sizeof server_addr) == -1) {
perror("bind");
exit(1);
}
for(int i=0; i < 100; i++) 
	{
		buf1[i] ='\0';
		buf2[i] = '\0';
		mes[i] ='\0';
	}
	strcpy(mes,"exit");

	while(flag == 0)
	{
		for(int i=0; i < 100; i++){
			buf1[i] = '\0';
			buf2[i] = '\0';
		}
		
		// Receive a message from client
		int addr_len1 = sizeof client_addr1;
		recvfrom(sockfd, buf1, 100 , 0,(struct sockaddr *)&client_addr1, &addr_len1);
		int addr_len2 = sizeof client_addr2;
		recvfrom(sockfd, buf2, 100 , 0,(struct sockaddr *)&client_addr2, &addr_len2);
		
		printf("Client 1 sent: %s\n", buf1);
		printf("Client 2 sent: %s\n", buf2);
			
		//Sending message to the client	
		sendto(sockfd, buf1, 100, 0,(struct sockaddr *)&client_addr2, sizeof(client_addr2));
	sendto(sockfd, buf2, 100, 0,(struct sockaddr *)&client_addr1, sizeof(client_addr1));	
		if((strcmp(buf1, mes) == 0) || (strcmp(buf2, mes) == 0))
		{
		 	flag = 1;
		 	break;
		}
	}

close(sockfd);
return 0;
}
