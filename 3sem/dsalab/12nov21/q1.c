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
    for(i=1;i<=n;i++){
        if(s == a[i]){
            printf("The element is found in index %d",i);
            return 0;
        }
    }
    return 0;
}
