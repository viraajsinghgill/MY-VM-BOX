#include<stdio.h>
#include<stdlib.h>

int Graph[100][100];
int vertices, edges;
int u, v;
int i, j;
 
void InputGraph()
{
    printf("Enter no. of vertices and edges=");
    scanf("%d%d", &vertices, &edges);
    
    for(i=0;i<vertices;i++)
        for(j=0;j<vertices;j++)
            Graph[i][j]=0;
 
    printf("Enter (u v):\n");
    for(i=0;i<edges;i++)
 {
        scanf("%d%d", &u, &v);
        Graph[u][v] = Graph[v][u] = 1;
    }
}
 
void AdjacencyMatrix()
{
    printf("\n");
    printf("Graph:\n");
    for(i = 0; i < vertices; ++i){
        for(j = 0; j < vertices; ++j)
            printf("%d ", Graph[i][j]);
        printf("\n");
    }
    printf("\n");
}

int main()
{
 int choice, cont; 
 do
 {
  printf("0. Quit\n");
  printf("1. Input a undirected graph.\n");
  printf("2. Find out Adjacency Matrix.\n");
  printf("3. Find out Adjacency List.\n");
  printf("4. Traverse by DFS.\n");
  printf("5. Traverse by BFS.\n");
  printf("Enter ur choice = ");
  scanf("%d",&choice);
  
  switch(choice)
  {
   case 0:
    {
     exit(0);
     break;
    }
   
   case 1:
    {
     InputGraph();
     break; 
    }
    
   case 2:
    {
     printf("Adjacency Matrix = \n");
     AdjacencyMatrix();
     break;
    }
   
   case 3:
    {
     printf("Adjacency List = \n");
     AdjacencyMatrix();
     break;
    }
  }
  printf("Do u want to continue? (1 = Yes) = ");
  scanf("%d",&cont);
 }while(cont == 1);
 return 0;
}
