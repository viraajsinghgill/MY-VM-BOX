#include<stdio.h>

void type(int *ptr)
{
    int pp=0,ne=0,ev=0,odd=0;
    for(int i=0;i<25;i++)
    {
        if(ptr[i]%2==0)
        ev++;
        else
        odd++;
        if(ptr[i]>=0)
        pp++;
        else
        ne++;
    }
    printf("\ntotal no of even no are == %d",ev);
    printf("\ntotal no of odd no are  == %d",odd);
    printf("\ntotal no of positive no are == %d",pp);
    printf("\n1total no of negative no are == %d",ne);
}

int main()
{
    int s[25],n;
    printf("enter the numbers one by one ");
    for(int i=0;i<25;i++)
    {
        scanf("%d",&s[i]);
    }
    for(int i=0;i<25;i++)
    {
        printf("%d,",s[i]);
    }
    type(s);
}
