#include <arpa/inet.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
 
// Driver code
int main()
{
    int sock;
    struct sockaddr_in server;
    int server_reply[10];
    int number[10] = { 5, 4, 3, 8, 9, 1, 2, 0, 6, 7 }, i, temp;
 
    // Create socket
    sock = socket(AF_INET, SOCK_STREAM, 0);
 
    server.sin_addr.s_addr = inet_addr("127.0.0.1");
    server.sin_family = AF_INET;
    server.sin_port = 60018;
 
    // Connect to remote server
    connect(sock, (struct sockaddr*)&server, sizeof(server));
   
    // Send to server    
    send(sock, &number, 10 * sizeof(int), 0);
 
    // Receive a reply from the server
    recv(sock, &server_reply, 10 * sizeof(int), 0);
 
    puts("Server reply:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", server_reply[i]);
    }
 
    // close the socket
    close(sock);
    return 0;
}
