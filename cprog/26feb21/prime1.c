#include<stdio.h>
int fun(int n)
{
 int i ,flag=0;
 for(i=2;1<n/2;i++)
 {
 if(n%i==0)
 flag=1;
break;
}

}
int main()
{
 int n;
 scanf("%d",&n);
 if(fun(n))
 printf("prime number");
 else
 printf("not a prime number");
 return(0);


}
