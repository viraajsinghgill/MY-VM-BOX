#include<stdio.h>

static int c1=0;
static int c2=0;
static int c3=0;
int gcd_Euclid(int num1,int num2)
{ 
c1++;
if(num2==0)
{
c1++;
c1++;
return num1;
}
c1++;
return gcd_Euclid(num2,num1%num2);

}
int gcd_Consecutive_integer_checking(int num1,int num2){
int i,num;
c2++;
c2++;
num=num1>=num2?num2:num1;
c2++;
for(i=num;i>=1;i--)
{c2++;
c2++;
if(num1%i==0&&num2%i==0)
{c2++;

return(i);
}
}
}
int gcd_Middle_school_procedure(int num1, int num2){
int m=0,n=0,ans=1;
c3++;
int temp=num1>=num2?num2:num1;
c3++;
c3++;
for(int i=2; i<=temp; i++){
c3++;
c3++;
m=0;
c3++;
n=0;
c3++;
if(num1%i==0){
c3++;
n=1;
c3++;
num1=num1/i;
}
c3++;
if(num2%i==0){
c3++;
m=1 ;
c3++;
num2=num2/i;
}
c3++;
if(m==1 && n==1){
c3++;
ans=ans*i;
}
c3++;
if(n==1 || m==1){
c3++;
i--;
}
}
return (ans);
}
int main(){
int n1,n2,gcd;
printf("Enter the two no's- ");
scanf("%d %d",&n1,&n2);
gcd=gcd_Euclid(n1,n2);
printf("\neuclid frequency: %d",c1);
printf("\nThe GCD using euclid algo: %d",gcd );
gcd=gcd_Consecutive_integer_checking(n1,n2);
printf("\nconsecutive integer checking frequency: %d",c2);
printf("\nThe GCD using g consecutive integer check: %d",gcd );
gcd=gcd_Middle_school_procedure(n1,n2);
printf("\nmiddle school procedure frequency: %d",c3);
printf("\nThe GCD using Middle School Procedure algo: %d",gcd );
return 0;
}


