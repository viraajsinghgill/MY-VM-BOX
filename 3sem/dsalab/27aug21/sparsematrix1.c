#include<stdio.h>
int smat[10][10];
int r,c;
int smat[10][10] ;
;  void mat1()
  {  int i,j ;
   // int smat[10][10];
    printf("enter number of rows and column of matrix 1 :");
    scanf("%d %d",&r,&c);
    printf("\nenter matrix:");
    for(i=0;i<r;i++)
    {
     for(j=0;j<c;j++)
     {
      printf("\nenter matrix[%d][%d]",i,j);
      scanf("%d",&smat[i][j]);
      }
      }
  }
 void tmat1()
 {
   int i, j, k, size = 0;
for (i = 0; i < 4; i++){
for (j = 0; j < 5; j++){
if (smat[i][j] != 0)
size++;
}
}
int sm[size+1][3];
k = 0;
sm[k][0] = r; sm[k][1] = c; sm[k][2] = size;
k++;
for (i = 0; i < 4; i++){
for (j = 0; j < 5; j++){
if (smat[i][j] != 0) {
sm[k][0] = i; sm[k][1] = j;
sm[k][2] = smat[i][j]; k++;
}
}
}
printf("matrix 1 =\n");
for (int i=0; i<=size; i++) {
for (int j=0; j<3; j++){
printf("%d ", sm[i][j]);
}
printf("\n");
    
    }
 }

 
   
 int main()
{
   mat1();
   tmat1();
    
    return 0;
 

}
