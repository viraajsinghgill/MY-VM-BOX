#include<stdio.h>

void add(int (*ptr)[5],int *pb)
{
    
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d ",ptr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<4;i++)
    {
        pb[i]=0;
        for(int j=0;j<5;j++)
        {
            pb[i]+=ptr[i][j];
            
        }


    }
    
    for(int i=0;i<4;i++)
    printf("\n%d",pb[i]);
}
int main()
{
    
    int s[4][5],y[4];
    printf("enter the numbers  ");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&s[i][j]);
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }

    add(s,y);

}
