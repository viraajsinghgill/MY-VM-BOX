
#include <arpa/inet.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

void bubble_sort(int[], int);

// Driver code
int main()
{
int socket_desc, client_sock, length;
struct sockaddr_in server, client;
int message[10], i;

socket_desc = socket(AF_INET, SOCK_STREAM, 0);

// Prepare the sockaddr_in structure
server.sin_family = AF_INET;
server.sin_addr.s_addr = INADDR_ANY;
server.sin_port = 60018;

// Bind the socket
bind(socket_desc, (struct sockaddr*)&server, sizeof(server));

// listen to the socket
listen(socket_desc, 5);

length = sizeof(socket_desc);

// accept connection from an incoming client
client_sock = accept(socket_desc, (struct sockaddr*)&client, &length);

// Receive a message from client
recv(client_sock, &message, 10 * sizeof(int), 0);

puts("Client sent:\n");

for (i = 0; i < 10; i++)
    {
        printf("%d\n", message[i]);
    }

bubble_sort(message, 10);

puts("Sorting in  ascending order and sending to client...\n");

//Sending message to the client
send(client_sock, &message, 10 * sizeof(int), 0);

close(socket_desc);
return 0;
}

// Function to sort the array
void bubble_sort(int list[], int n)
{
int c, d, t;

for (c = 0; c < (n - 1); c++) {
for (d = 0; d < n - c - 1; d++) {
if (list[d] > list[d + 1]) {

/* Swapping */
t = list[d];
list[d] = list[d + 1];
list[d + 1] = t;
}
}
}
}
