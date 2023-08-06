#include<stdio.h>
int c=0;
int gcd_Euclid(int num1,int num2)
{ //int c=0;
c++;
if(num2==0)
{c++;
c++;
return num1;
}
c++;
return gcd_Euclid(num2,num1%num2);

}

int main(){
int n1,n2,gcd;
printf("Enter the two no's- ");
scanf("%d %d",&n1,&n2);
printf("\nThe GCD using euclid algo: %d",gcd );
gcd=gcd_Euclid(n1,n2);
return 0;
}


