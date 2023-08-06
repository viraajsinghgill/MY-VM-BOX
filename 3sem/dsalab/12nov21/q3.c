#include<stdio.h>

int main(){
    int n,i,j,t;
    printf("Enter no. of integers: ");
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++){
        printf("Enter digit: ");
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(a[i]>a[j]){
                t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
    }
    for(i=1;i<=n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
