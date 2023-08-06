#include<stdio.h>
int main()
{
 FILE *fp;
 char ch;
 fp=fopen("PR1.in","r");
 
  while((ch=fgetc(fp)) !=EOF)
    printf("%c",ch);
    
    fclose(fp);
    return(0);
}
