#include<stdio.h>
int main() {
 int i,m,n,b;
 printf("enter size");
 scanf("%d",&b);
 int a[b];
 for(i=0;i<b;i++)
 {
 	scanf("%d",&a[i]);
	}
 printf ("Enter range (m, n ) : ") ;
 scanf ("%d %d", &m, &n);
 for (a[i]= m; a[i] <= n; a[i]++) {
   printf("%d ", a[i]);
 }
}
