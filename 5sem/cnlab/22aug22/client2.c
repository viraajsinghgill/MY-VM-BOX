

#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<fcntl.h>
#include<string.h>
main()
{
  int i,sockfd,a,b,p=6,q=7,r;
  char buf[100];
  struct sockaddr_in server_addr;

/* Opening a socket is exactly similar to the server process */
  sockfd=socket(AF_INET,SOCK_DGRAM,0);


  server_addr.sin_family=AF_INET;
  server_addr.sin_addr.s_addr=inet_addr("127.0.0.1"); //Loop back IP address
  server_addr.sin_port=8000;

/* With the information specified in serv_addr, the connect()
system call establishes a connection with the server process.*/
 i=bind(sockfd,(struct sockaddr *)&server_addr,sizeof(server_addr));


for(i=0; i < 100; i++) buf[i] = '\0';

	
	for(i=0; i < 100; i++) buf[i] = '\0';
	strcpy(buf,"Message from client");
	sendto(sockfd, buf,100, 0,(struct sockaddr *)&server_addr, sizeof(server_addr));
	
	int s=sizeof(server_addr);
	for(i=0; i < 100; i++) buf[i] = '\0';
	recvfrom(sockfd, buf, 100, 0,(struct sockaddr *)&server_addr, &s);
	printf("%s\n", buf);
	printf("got packet from %s\n",inet_ntoa(server_addr.sin_addr));
	
close(sockfd);

 
}

