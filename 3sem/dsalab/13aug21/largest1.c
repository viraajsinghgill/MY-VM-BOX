#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i=0,n,l=0;
 int *data,count=0;
  printf("enter total number of elements :");
  scanf("%d",&n);
  data=calloc(n,sizeof(int));
  printf("\nenter elements of array %d:",i);
  for(i=0;i<n;++i)
   { 
   scanf("%d",&data[i]);
    //for(i=1;i<n;++i)
    if(data[i]>l)
     {
       l=data[i];
       count=1;
     }
     else if(data[i]==l)
     count++;
     }
     printf("largest element=%d \noccurence =%d",l,count);
     //free(data);
     return(0);
     

}
