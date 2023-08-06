#include<stdio.h>


int main(){
char a[]={'p','q','r','s','t','u','v','w','x','y','z'};
int s[] = {3,0,3,5,6,8,2,12,5,8,1};
int f[] = {5,6,9,9,10,11,14,16,7,12,4};
char c;
int n=10;
printf("select the activity");
scanf("%s",&c);
for(int i=0;i<10;i++)
{
	if(a[i]==c)
	{
	  int i = 0;
	  for(int m = 0;m<i;m++){

	if(s[m] >= s[i]){
printf("activity %c\n",a[m]);
i = m;

}
for(int m = i;m<n;m++){

if(s[m] >= s[i]){
printf("activity %c\n",a[m]);
i = m;

}
  
}
}
break;
}

}
}

