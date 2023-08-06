#include<stdio.h>
#include<stdlib.h>

int visited_DFS[100], visited_BFS[100];
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
    for(i=0;i<vertices;i++)
	{
        for(j=0;j<vertices;j++)
            printf("%d ", Graph[i][j]);
        printf("\n");
    }
    printf("\n");
}

void AdjacencyList()
{
    for(i=0;i<vertices;i++)
	{
		printf("%d -> ",i);
        for(j = 0; j < vertices; ++j)
        {
            if(Graph[i][j]==1)
            	printf("%d -> ",j);
    	}
        printf("NULL\n");
    }
    printf("\n");
}

struct queue
{
    int size;
    int f;
    int r;
    int* arr;
};

int isEmpty(struct queue *q)
{
    if(q->r==q->f)
        return 1;
    return 0;
}
 
int isFull(struct queue *q)
{
    if(q->r==q->size-1)
        return 1;
    return 0;
}

void enqueue(struct queue *q, int val)
{
    if(isFull(q))
        printf("This Queue is full\n");
    else
	{
        q->r++;
        q->arr[q->r] = val;
    }
}

int dequeue(struct queue *q)
{
    int a = -1;
    if(isEmpty(q))
        printf("This Queue is empty\n");
    else
	{
        q->f++;
        a = q->arr[q->f]; 
    }
    return a;
}

void DFS(int i)
{
	printf("%d ", i);
    visited_DFS[i] = 1;
    for (int j = 0; j < 100; j++)
        if(Graph[i][j]==1 && !visited_DFS[j])
            DFS(j);
}

void BFS()
{
	struct queue q;
    q.size = 400;
    q.f = q.r = 0;
    q.arr = (int*) malloc(q.size*sizeof(int));
    
    int i=1, node;
    printf("%d ",i);
    visited_BFS[i] = 1;
    enqueue(&q, i);
    
    while (!isEmpty(&q))
    {
        int node = dequeue(&q);
        for (int j = 0; j < 100; j++)
        {
            if(Graph[node][j] ==1 && visited_BFS[j] == 0)
			{
                printf("%d ", j);
                visited_BFS[j] = 1;
                enqueue(&q, j);
            }
        }
    }
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
					AdjacencyList();
					break;
				}
			
			case 4:
				{
					printf("Traversed using DFS = ");
					DFS(1);
					printf("\n");
					break;
				}
			case 5:
				{
					printf("Traversed using BFS = ");
					BFS();
					printf("\n");
					break;
				}
		}
		printf("Do u want to continue? (1 = Yes) = ");
		scanf("%d",&cont);
	}while(cont == 1);
	return 0;
}
