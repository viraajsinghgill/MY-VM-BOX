#define sqr(a) a*a
#define inc(b) b+1
#include<stdio.h>
int main()
{
    int p,q,r;
    p=sqr(3-1);
    q=inc(2) + sqr(4);
    r=inc(4+1)*sqr(2+2);
    printf("result of p %d",p);
    printf("\nresult of q %d",q);
    printf("\nresult of r%d",r );
    return(0);

}
