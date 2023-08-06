#include<stdio.h>
void gcd_Euclid(int num1,int num2)
{ int gcd ,c=0;
c++;
if(num2==0){
c++;
c++;
printf("%d",num1);
}c++;
 //return gcd_Euclid(num2,num1%num2);
printf("\nThe GCD using euclid algo: ");
 return gcd_Euclid(num2,num1%num2);
printf("\nfrequency of Euclid algorithm :%d",c);
}
int gcd_Consecutive_integer_checking(int num1,int num2){
int i,num;
num=num1>=num2?num2:num1;
for(i=num;i>=1;i--)
{
if(num1%i==0&&num2%i==0)
{
return(i);
}
}
}
int gcd_Middle_school_procedure(int num1, int num2){
int m=0,n=0,ans=1;
int temp=num1>=num2?num2:num1;
for(int i=2; i<=temp; i++){
m=0;
n=0;
if(num1%i==0){
n=1;
num1=num1/i;
}
if(num2%i==0){
m=1 ;
num2=num2/i;
}
if(m==1 && n==1){
ans=ans*i;
}
if(n==1 || m==1){
i--;
}
}
return (ans);
}
int main(){
int n1,n2,gcd;
printf("Enter the two no's- ");
scanf("%d %d",&n1,&n2);
//gcd=gcd_Euclid(n1,n2);
//printf("\nThe GCD using euclid algo: %d",gcd );
gcd_Euclid(n1,n2);
//gcd=gcd_Consecutive_integer_checking(n1,n2);
//printf("\nThe GCD using g consecutive integer check: %d",gcd );
//gcd=gcd_Middle_school_procedure(n1,n2);
//printf("\nThe GCD using Middle School Procedure algo: %d",gcd );
return 0;
}
