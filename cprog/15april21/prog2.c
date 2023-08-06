#include<stdio.h>

void add(int (*ptr)[5],int *pb)
{
    int n;
    
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
    printf("enter the row no. whose sum is required  ");
    scanf("%d",&n);
    printf("\n sum of %d th row is %d  ",n,pb[n-1]);
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
    
    add(s,y);

}
