#include <stdio.h>
#include <stdlib.h>
#include<time.h>
void insertion_sort(int arr[], int size){
int i,j,temp;
for(i=1;i<size;i++){
temp = arr[i];
for(j=i-1;j>=0;j--){
if(arr[j]>temp)
arr[j+1] = arr[j];
else
break;
}
arr[j+1] = temp;
}
}
void insertion_sort_desc(int arr[], int size){
int i,j,temp;
for(i=1;i<size;i++){
temp = arr[i];
for(j=i-1;j>=0;j--){
if(arr[j]<temp)
arr[j+1] = arr[j];
else
break;
}
arr[j+1] = temp;
}
}
void display_array(int arr[], int size){
for(int i=0;i<size;i++){
printf("%d ",arr[i]);
}
}
int main()
{
srand(time(0));
int choice, size,randArray[100],i;
while(choice!=7)
{
printf("\n\nPress 1 .n Random numbers=>Array\n");
printf("Press 2 Display the Array\n");
printf("Press 3 Sort the Array in Ascending Order by using Insertion Sort Algorithm\n");
printf("press 4 Sort the Array in Descending Order by using any sorting algorithm \n");
printf("press 5 Time Complexity to sort ascending of random data \n");
printf("press 6 TC to sort ascending of data already sorted in ascending order\n");
printf("press 7 TC to sort ascending of data already sorted in descending order \n");
printf("press 8 Time Complexity to sort ascending of data for all Cases in Tabular sform for values n=5000 to 50000, step=5000 \n");
printf("Enter your choice: ");
scanf("%d",&choice);
switch (choice) {
case 1: {
printf("Enter the size of array::");
scanf("%d",&size);
for(i=0;i<size;i++)
randArray[i]=rand()%100;
break;
}
case 2: {
printf("Displaying the array:\n");
for(int i=0;i<size;i++){
printf("%d ",randArray[i]);
}
break;
}
case 3:{
insertion_sort(randArray,size);
printf("\nArray in Acending order- ");
display_array(randArray, size);
break;
}
case 4:
{
insertion_sort_desc(randArray ,size);
printf("\nArray in Decending order- ");
display_array(randArray, size);
break;
}
case 5:
{
clock_t start,end;
start=clock();
insertion_sort(randArray,size);
end=clock();
double d=((double)(end-start)/ CLOCKS_PER_SEC);
printf("\n\nTime Complexity: %lf",d);
break;
}
case 6:
{
clock_t start,end;
start=clock();
insertion_sort(randArray,size);
end=clock();
double d=((double)(end-start)/ CLOCKS_PER_SEC);
printf("\n\nTime Complexity: %lf",d);
break;
}
case 7:
{
clock_t start,end;
start=clock();
insertion_sort_desc(randArray,size);
end=clock();
double d=((double)(end-start)/ CLOCKS_PER_SEC);
printf("\n\nTime Complexity: %lf",d);
break;
}
default:
printf("wrong Input\n");
}
} 
}

