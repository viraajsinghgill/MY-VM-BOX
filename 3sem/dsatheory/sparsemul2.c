#include<stdio.h>
int main() {
// Assume 4x5 sparse matrix
int smat[4][5] =
{ {0 , 0 , 3 , 0 , 4 },
{0 , 0 , 5 , 7 , 0 },
{0 , 0 , 0 , 0 , 0 },
{0 , 2 , 6 , 0 , 0 }
};
int swat[3][3]={{0,1,0},{0,6,0},{0,0,0}};
int i, j, k, size = 0;
for (i = 0; i < 4; i++)
for (j = 0; j < 5; j++)
if (smat[i][j] != 0)
size++;
int sm[size+1][3];
k = 0;
sm[k][0] = 4; sm[k][1] = 5; sm[k][2] = size;
k++;
for (i = 0; i < 4; i++)
for (j = 0; j < 5; j++)
if (smat[i][j] != 0) {
sm[k][0] = i; sm[k][1] = j;
sm[k][2] = smat[i][j]; k++;
}
printf("matrix 1 =\n");
for (int i=0; i<=size; i++) {
for (int j=0; j<3; j++)
printf("%d ", sm[i][j]);
printf("\n");
    }
    
    //sprse matrix 2
     int siz=0,m,n;
    for (m = 0; m < 3; m++)
for (n = 0; n < 3; n++)
if (swat[m][n] != 0)
siz++;
int sw[siz+1][3];
k = 0;
sw[k][0] = 3; sw[k][1] = 3; sw[k][2] = siz;
k++;
for (m = 0; m < 3; m++)
for (n = 0; n < 3; n++)
if (swat[m][n] != 0) {
sw[k][0] = m; sw[k][1] = n;
sw[k][2] = swat[m][n]; k++;
}
printf("matrix 2 =\n");
for (int m=0; m<=siz; m++) {
for (int n=0; n<3; n++)
printf("%d ", sw[m][n]);
printf("\n");
} 
//multiplication step
   int sf[size+1][3];
   int d;
   if(j=m)
   { 
         for(i=1;i<=size;i++){
        for(j=0;j<3;j++){
             for(d=0;d<3;d++)  {     
           sf[i][j]+=(sm[i][d]*sw[d][j])  ;
        }
      }
   }
   }
  else printf("fail");
  
  printf("final matrix =\n");
for (int i=0; i<=size; i++) {
for (int j=0; j<3; j++)
printf("%d ", sf[i][j]);
printf("\n");
  }

return 0;
}
