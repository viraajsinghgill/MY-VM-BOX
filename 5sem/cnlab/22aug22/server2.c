
#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<fcntl.h>
#include<string.h>
main()
{
int sockfd,fd1, length,i,x,y,sum;
char buf[100],p[3]; /* We will use this buffer for communication */
struct sockaddr_in server_addr,client_addr;


sockfd=socket(AF_INET,SOCK_DGRAM,0);


 server_addr.sin_family=AF_INET;
 server_addr.sin_addr.s_addr=INADDR_ANY;
 server_addr.sin_port=8000;

/* With the information provided in serv_addr, we associate the server
with its port using the bind() system call. */
 i=bind(sockfd,(struct sockaddr *)&server_addr,sizeof(server_addr));
 printf("test %d%d\n",sockfd,i);



 length=sizeof(client_addr);
 //fd1=accept(sockfd, (struct sockaddr *) &ta1,&length);
/* We initialize the buffer, copy the message to it,
and send the message to the client. */
 
/* We again initialize the buffer, and receive a 
message from the client. */
for(i=0; i < 100; i++)	 buf[i] = '\0';
			recvfrom(sockfd, buf, 100,0,(struct sockaddr *)&client_addr, &length);

			printf("%s\n", buf);
			printf("got packet from %s\n",inet_ntoa(client_addr.sin_addr));
			
for(i=0; i < 100; i++) buf[i] = '\0';
			strcpy(buf,"Message from server");
			sendto(sockfd, buf, 100, 0,(struct sockaddr *)&client_addr, sizeof(client_addr));

close(sockfd);


 }
