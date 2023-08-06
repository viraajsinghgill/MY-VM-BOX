#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i=0,n;
  float *data;
  printf("enter total number of elements (1to 100):");
  scanf("%d",&n);
  data=(float*)calloc(n,sizeof(float));
  printf("\nenter number %d:",i+1);
  for(i=1;i<n;++i)
    scanf("%f",data+i);
    for(i=1;i<n;++i)
    if(*data<*(data+i))
     *data=*(data+i);
     printf("largest element=%.2f",*data);
     free(data);
     return(0);
     

}
