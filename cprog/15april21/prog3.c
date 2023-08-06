#include<stdio.h>

void add(int (*ptr)[6],int *pb,int n)
{
    
    printf("\n");
     for(int i=0;i<3;i++)
    {
        pb[i]=0;
        for(int j=0;j<6;j++)
        {
            pb[i]+=!(ptr[i][j]%2);
        }
    }
    printf("\nno of even numbers in %dth rows are \n",n);
     
        printf("\n%d",pb[n-1]);
    
}
int main()
{
    int s[3][6],c[3],n;
    printf("enter the numbers  ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<6;j++)
        {
            scanf("%d",&s[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<6;j++)
        {
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
    printf("enter the row no to be searched ");
    scanf("%d",&n);

    add(s,c,n);

}
