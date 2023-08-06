#include <stdio.h>
#include<string.h>
void main()
{
    printf("enter your name : ");
    char ro_n[50];
    scanf("%s",ro_n);
    int ro_l;
    ro_l=strlen(ro_n);
    char ro_cp[500];
    int i,j=0,k;
    for(i=ro_l-1;i>=0;i--)
    {
        if(ro_n[i]=='a'||ro_n[i]=='e'||ro_n[i]=='i'||ro_n[i]=='o'||ro_n[i]=='u')
        {
            ro_cp[j]='\0';j++;
        }
        else
        {
            ro_cp[j]=ro_n[i];j++;
        }
        for(k=0;k<ro_l;k++)
        {
            ro_cp[j]=' ';j++;
        }
    }
    
}
