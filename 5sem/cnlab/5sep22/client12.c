

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
  char buf1[100],buf2[100],mes[100],flag=0;
  struct sockaddr_in server_addr;

/* Opening a socket is exactly similar to the server process */
  sockfd=socket(AF_INET,SOCK_DGRAM,0);


  server_addr.sin_family=AF_INET;
  server_addr.sin_addr.s_addr=inet_addr("127.0.0.1"); //Loop back IP address
  server_addr.sin_port=60017;

/* With the information specified in serv_addr, the connect()
system call establishes a connection with the server process.*/
 i=bind(sockfd,(struct sockaddr *)&server_addr,sizeof(server_addr));

for(i=0; i < 100; i++)
	{ 	buf1[i] = '\0'; 
		buf2[i] = '\0'; 
		mes[i]='\0';
	}
	strcpy(mes,"exit");

	while(flag == 0)
	{
	for(i=0; i < 100; i++) buf1[i] = '\0';
		for(i=0; i < 100; i++) buf2[i] = '\0';
		printf("\nString: ");
		scanf("%s", buf2);
		strcpy(buf1,buf2);
	sendto(sockfd, buf2,100, 0,(struct sockaddr *)&server_addr, sizeof(server_addr));
		// Send to server  
		
		
		for(i=0; i < 100; i++) buf2[i] = '\0';
		
		// Receive a reply from the server
		int s=sizeof(server_addr);
		recvfrom(sockfd, buf2, 100, 0,(struct sockaddr *)&server_addr, &s);
	printf("%s\n", buf2);
	
		if(strcmp(buf1,mes) == 0 || strcmp(buf2,mes) == 0)
		{
			flag = 1;
			break;
		}
		printf("server sent (of client2):%s\n",buf2);
	}
	


	
close(sockfd);
return 0;
 
}

