#include<stdio.h>
void greedy_activity_selector(int s[],int f[],int act[],int n){
int i = 0; 
printf("activity 0\n");
for(int m = 1;m<n;m++){
	if(s[m] >= f[i]){
		printf("activity %d\n",act[m]);
		i = m;
	}
}
}

int main(){
int start[] = {6,5,4,2,3};
int finish[] = {9,7,7,4,4};
int act[] = {5,4,3,2,1};
 greedy_activity_selector(start,finish,act,6);
}
