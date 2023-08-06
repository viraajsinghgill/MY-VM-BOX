#include<stdio.h>
int main()
{
  FILE *fp;
  char ch;
  int noc=0,nob=0,not=0,non=0;
  fp=fopen("PR1.in","r");
  while((ch=fgetc(fp)) !=EOF)
  {
    noc++;
    if(ch==' ')
    nob++;
    if(ch=='\t')
    not++;
    if(ch=='\n')
    non++;
  }
  fclose(fp);
  printf("\nNo. of characters =%d",noc);
  printf("\nNo. of blanks =%d",nob);
  printf("\nNo. of tabs =%d",not);
  printf("\nNo. of lines =%d",non);
  
  return(0);
}
