#include<stdio.h>
/*
long insertionSort(char a[],int s[],int f[], int n)
{
long count = 1;
for (int j = 1; j < n; ++j, count++)
{
count++; //number of times temp is assigned
int temp1 = s[j];
char temp2 = a[j];
int temp3 = f[j];

count++; //number of times i is assigned
int i = j - 1;
count++; //number of times while loop is initialized
while (s[i] > temp1 && i >= 0)
{
count++; //number of shift operations
s[i + 1] = s[i];
a[i+1]=a[i];
f[i+1]=f[i];

count++; //number of i decrements
i--;
}
count++; // number of times temp is assigned to it's position
s[i + 1] = temp1;
a[i + 1] = temp2;
f[i + 1] = temp3;
}
}*/

void greedy_activity_selector(char a[],int s[],int f[],int n){
int i = 0; //printf("activity 0\n");
printf("activity\t\tstart\t\tfinish\t\t\n");
for(int m = 0;m<n;m++){
//for(int i=m+1;i<n;i++){
if(s[m] >= s[i]){
printf("%c\t\t%d\t\t%d\n",a[m],s[m],f[m]);
i = m;
//}
}
}
}

int main(){
char c[]={'p','q','r','s','t','u','v','w','x','y','z'};
int start[] = {3,0,3,5,6,8,2,12,5,8,1};
int finish[] = {5,6,9,9,10,11,14,16,7,12,4};
//insertionSort(c,start,finish,10);
greedy_activity_selector(c,start,finish,10);
}

