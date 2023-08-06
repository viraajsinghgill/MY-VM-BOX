#include<stdio.h>
int main(){
    int n,i,j;
    int min,max;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter index i and j : ");
scanf("%d %d",&i,&j);
printf("Enter the elements of array: ");
for(int k=0;k<n;k++){
    scanf("%d",&arr[k]);
}
    min=max=arr[0];
    for(int k=i; k<=j; k++)
    {
         if(min>arr[k])
    min=arr[k];   
     if(max<arr[k])
      max=arr[k];       
    }
printf("pair b/w i & j with maximum sum is : (%d,%d) \n",max,min);
printf("maximum sum is: %d\n",max-min);
    return 0;
}
