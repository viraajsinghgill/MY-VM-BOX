#include<stdio.h>
#include<limits.h>


int matrix_chain_order(int p[], int n)
{
    int m[n][n];
    int s[n-1][n-1];
    int i, j, k, L, q;
 
    for (i=1; i<n; i++)
        m[i][i] = 0; 
    
    for (L=2; L<n; L++)
    {
        for (i=1; i<n-L+1; i++)
        {
            j = i+L-1;
            m[i][j] = INT_MAX; 
 
            for (k=i; k<=j-1; k++)
            {
                q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
                if (q < m[i][j])
                {
                    m[i][j] = q;
                    s[i][j]=k; 
                }
            }
        }
    }
 
    return m[1][n-1]; 
   
    
 
}
/*
int print_optimal_parens(int s[][],int i,int j)
{
	if(i=j)
	{printf("A%d",i);
	
	}
	else {printf("(");
	 		print_optimal_parens(s,i,s[i][j]);
	 		print_optimal_parens(s,s[i][j]+1,j);
	 	printf(")");
	 	}
	 			
}
*/
int main(){

	int n,i;
	printf("enter number of matrices\n");
	scanf("%d",&n);
	
	n++;
	
	int ar[n];
	printf("enter dimensions \n");
	
	for(i=0;i<n;i++)
	{
	printf("enter %d::",i);
	scanf("%d",&ar[i]);
	
	}
	int size=sizeof(ar)/sizeof(ar[0]);
	printf("miniumum number of multiplications is %d\n",matrix_chain_order(ar,size));
	return 0;
}
