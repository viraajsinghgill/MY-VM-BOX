#include<stdio.h>

int main(){
    int n,i;
    printf("Enter no. of integers: ");
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++){
        printf("Enter digit: ");
        scanf("%d",&a[i]);
    }
    int s;
    printf("Enter digit to be searched ");
    scanf("%d",&s);
    int e = n-1, m, m1;
    i=0;
    while(1){
        m = (i+e)/2;
        if(m == m1){m++;}
        if(a[m]==s){
            printf("The element is found in index %d",m);
            return 0;
        }else if (a[m]>s){
           
            e = m;
        }else{
             i = m;
        }
        m1 = m;
    }
    return 0;
}
