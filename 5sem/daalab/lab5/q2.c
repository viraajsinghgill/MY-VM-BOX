#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
void insertion_sort(int arr[], int size)
{
	int i,j,temp;
	for(i=1;i<size;i++)
	{
		temp = arr[i];
		for(j=i-1;j>=0;j--)
		{
			if(arr[j]>temp)
				arr[j+1] = arr[j];
			else
				break;
		}
	arr[j+1] = temp;
	}
}

void HEAPIFY(int arr[], int n, int i) 
{   
    int smallest;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
  
    if (left < n && arr[left] < arr[i])
      	smallest = left;
  	else
  		smallest=i;
    if (right < n && arr[right] < arr[smallest])
      	smallest = right;

    if (smallest != i) 
	{
	    swap(&arr[i], &arr[smallest]);
      	HEAPIFY(arr, n,smallest);
    }
}

void MIN_HEAP(int arr[], int n) 
{
    for (int i = n / 2 - 1; i >= 0; i--)
      	HEAPIFY(arr, n, i);
    for (int i = n - 1; i >= 0; i--) 
	{
      swap(&arr[0], &arr[i]);
      HEAPIFY(arr, i, 0);
    }
}
  
void Display(int arr[], int n) 
{
    for (int i = 0; i < n; ++i)
      printf("%d ", arr[i]);
    printf("\n");
}
  
void Smallest(int arr[],int size)
{
	printf("Smallest number = %d",arr[size-1]);
}

void Replace(int arr[], int size, int index, int key)
{
	arr[index-1]=key;
	printf("Replaced =>\n");
	Display(arr,size);
	MIN_HEAP(arr,size);
	printf("After Max-Heap Sort =>\n");
	Display(arr,size);
}

void Insert(int arr[],int size, int key)
{
    	size+=1;
	arr[size-1]=key;
	MIN_HEAP(arr,size);
	Display(arr,size);
}

void Delete(int arr[],int size,int index)
{
	arr[index-1]=arr[size-1];
	size--;
	MIN_HEAP(arr,size);
	Display(arr,size);
}

int main() 
{
	int c,i,t,size;
			printf("\n0.Quit");
		printf("\n1.Create a random array with 'n' elements.");
		printf("\n2.Display array.");
		printf("\n3.Sort the Array in Descending Order by using Min-Heap Sort technique.");
		printf("\n4.Sort the Array in Ascending Order.");
		printf("\n5.Time Complexity to sort descending of random data.");
		printf("\n6.Time Complexity to sort descending of data already sorted in ascending order.");
		printf("\n7.Time Complexity to sort ascennding of data already sorted in descending order.");
		printf("\n8.Time Complexity to sort descending all Cases (Data Ascending, Data in Descending & Random Data).");
		printf("\n9.Extract smallest element.");
		printf("\n10.Replace value at a node with new value.");
		printf("\n11.Insert a new element.");
		printf("\n12.Delete an element.");
	do
	{
		
       int arr[50000],randArray[50000];
		printf("\nEnter your choice : ");
		scanf("%d",&c);
		int z,z1,y,y1;
		switch(c)
		{
			case 0: exit(0);
					break;
					
			case 1: printf("Enter size : ");
					scanf("%d",&size);
					for(i=0;i<size;i++)
						arr[i]=rand()%1000;
					break;
					
			case 2: Display(arr,size);
					break;
					
			case 3: MIN_HEAP(arr,size);
			        Display(arr,size);
					break;
					
			case 4: insertion_sort(arr,size);
			        Display(arr,size);
					break;
					
			case 5: {
						for(i=0;i<size;i++)
						arr[i]=rand()%100;
						clock_t start1,end1;
						start1=clock();
						MIN_HEAP(arr,size);
						end1=clock();
						double d1=((double)(end1-start1)/ CLOCKS_PER_SEC);
						printf("\n\nTime Complexity to sort random data : %lf",d1);
						break;
					}
					
			case 6: {
						for(i=0;i<size;i++)
							arr[i]=rand()%100;
						MIN_HEAP(arr,size);
						clock_t start2,end2;
						start2=clock();
						MIN_HEAP(arr,size);
						end2=clock();
						double d2=((double)(end2-start2)/ CLOCKS_PER_SEC);
						printf("\n\nTime Complexity to sort descending data : %lf",d2);
						break;
					}
					
			case 7: {
						for(i=0;i<size;i++)
							arr[i]=rand()%100;
						insertion_sort(arr,size);
						clock_t start3,end3;
						start3=clock();
						MIN_HEAP(arr,size);
						end3=clock();
						double d3=((double)(end3-start3)/ CLOCKS_PER_SEC);
						printf("\n\nTime Complexity to sort ascending data : %lf",d3);
						break;	
					}	
					
			case 8: {
						int j;
						printf("\nN \t Random Data \t Descending Data \t Ascending Data");
						for(int i=0;i<10;i++)
						{
							size = 5000*(i+1);
							for(j=0;j<size;j++)
								randArray[j]=rand()%10000;
								
							clock_t start1,end1;
							start1=clock();
							MIN_HEAP(randArray,size);
							end1=clock();
							double d1=((double)(end1-start1)/ CLOCKS_PER_SEC);
							
							for(j=0;j<size;j++)
							randArray[j]=rand()%10000;
							MIN_HEAP(randArray,size);
							clock_t start2,end2;
							start2=clock();
							MIN_HEAP(randArray,size);
							end2=clock();
							double d2=((double)(end2-start2)/ CLOCKS_PER_SEC);
							
							for(j=0;j<size;j++)
								randArray[j]=rand()%10000;
							insertion_sort(randArray,size);
							clock_t start3,end3;
							start3=clock();
							MIN_HEAP(randArray,size);
							end3=clock();
							double d3=((double)(end3-start3)/ CLOCKS_PER_SEC);
							
							printf("\n%d \t %lf \t %lf \t\t %lf", size,d1,d2,d3);
						}
						break;		
					}
					
			case 9: Smallest(arr,size);
					break;
			
			case 10:
			        printf("Enter position of the number to be replaced with : ");
					scanf("%d",&z);
					printf("Enter number which will replace : ");
					scanf("%d",&z1);
			        Replace(arr,size,z,z1);
					break;
					
			case 11:printf("Enter number to be inserted : ");
					scanf("%d",&y1);
			        Insert(arr,size,y1);
					break;
			case 12:
			        Delete(arr,size,2);
		}
		}while(c!=0);
	
	return 0;
}
