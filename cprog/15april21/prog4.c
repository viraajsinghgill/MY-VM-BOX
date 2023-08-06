#include<stdio.h>
void search(int *ptr,int n)
{
    int c=0;
    for(int i=0;i<25;i++)
    {
        if(ptr[i]==n)
        c++;
    }
    if(c>0)
        printf("the no. %d occured %d times ",n,c);
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
    printf("enter the number to be searched ");
    scanf("%d",&n);

    search(s,n);
}
