/*Input a graph G=(V,E) and traverse the vertex by using DFS(Depth Firt Search)
and BFS (Breadth First Search) algorithm. GRAPH ALGORITHM
------------------------------------------
                MENU DRIVEN
------------------------------------------
0.QUIT
1.Input a Unidirected Graph
2.Find out Adjacency Matrix
3.Find out Adjacency List
4.Traverse by DFS(Depth First Search)
5.Traverse by BFS(Breadth First Search)
Enter your Choice :
*/

#include <stdio.h>
#include <stdlib.h>
int N, M;

// Function to create Adjacency Matrix
void createAdjMatrix(int Adj[][N + 1], int arr[][2])
{

    for (int i = 0; i < N + 1; i++)
    {
        for (int j = 0; j < N + 1; j++)
        {
            Adj[i][j] = 0;
        }
    }
    // Traverse the array of Edges
    for (int i = 0; i < M; i++)
    {
        int x = arr[i][0];
        int y = arr[i][1];

        Adj[x][y] = 1;
        Adj[y][x] = 1;
    }
}
// printing
void printAdjMatrix(int Adj[][N + 1])
{

    // Traverse the Adj[][]
    for (int i = 1; i < N + 1; i++)
    {
        for (int j = 1; j < N + 1; j++)
        {

            // Print the value at Adj[i][j]
            printf("%d ", Adj[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int choice = 0;
    int N;
    scanf("Enter the dimensions of the Matrix");
    scanf("%d", &N);
    int arr[][N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[][i]);
    }

    // Number of Edges
    M = sizeof(arr) / sizeof(arr[0]);
    int Adj[N + 1][N + 1];
    printf("Menu");
    pritnf("0.Quit");
    printf("1.Input a Unidirected Graph");
    pritnf("2.Input a adjacency Matrix Graph");
    printf("3.Find out Adjacency List");
    pritnf("4.Traverse by DFS(Depth First Search");
    printf("5.Traverse by BFS(Breadth First Search");
    do
    {
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            break;
        case 2:
            createAdjMatrix(Adj, arr);
            printAdjMatrix(Adj);
        }
        }
        }
        
