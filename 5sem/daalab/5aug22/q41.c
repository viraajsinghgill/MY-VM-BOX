#include<stdio.h>
const int INT_MIN=-1e9;
int maxsubarraysum(int a[],int n){
int maxsum=INT_MIN;
for(int i=0;i<n-1;i++)
{
	int currsum=0;
	for(int j=1;j<=n-1;j++)
	{
	currsum=currsum+a[i];
	if(currsum>maxsum)
	{
	maxsum=currsum;
	}
	}
}
return maxsum;
}
int main(){

	int a[]={1,3,8,-2,6,-8,5};
	printf("%d",maxsubarraysum(a,7));
	return 0;
}
