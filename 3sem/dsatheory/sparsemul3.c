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

 void mat2()
  {  int i,j ;
   // int smat[10][10];
    printf("enter number of rows and column of matrix 2 :");
    scanf("%d %d",&r,&c);
    printf("\nenter matrix:");
    for(i=0;i<r;i++)
    {
     for(j=0;j<c;j++)
     {
      printf("\nenter matrix[%d][%d]",i,j);
      scanf("%d",&swat[i][j]);
      }
      }
  }

   void tmat2()
   {
     int siz=0,m,n,k;
    for (m = 0; m < 3; m++){
for (n = 0; n < 3; n++){
if (swat[m][n] != 0)
siz++;
}
}
int sw[siz+1][3];
k = 0;
sw[k][0] = 3; sw[k][1] = 3; sw[k][2] = siz;
k++;
for (m = 0; m < 3; m++){
for (n = 0; n < 3; n++){
if (swat[m][n] != 0) {
sw[k][0] = r; sw[k][1] = c;
sw[k][2] = swat[m][n]; k++;
}
}
}
printf("matrix 2 =\n");
for (int m=0; m<=siz; m++) {
for (int n=0; n<3; n++){
printf("%d ", sw[m][n]);
}
printf("\n");
 
}
   }
 int main()
{
   mat1();
   tmat1();
   mat2();
   tmat2();
   
 

}
