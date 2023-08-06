#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void is_prime_algo1(int n)
{
	int c=0;
	int yes=1;
	c++;
	c++;
	for(int i=2;i<=n-1;i++)
	{
		c++;
		c++;
		if(n%i==0)
		{
			yes=0;
			c++;
			c++;
			break;
		}
	}
	c++;
	if(yes==1)
	{
		c++;
		printf("\n%d is a prime number",n);
		
	}
	else { c++;
		printf("\n%d is not a prime number",n);
		}
		//c++;
		printf("\nnumber of steps :%d",c);
		
}
void is_prime_algo2(int n){
int i,flag=1,c=0;
  c++ ; 
  c++;
  for(i=2;i<=n/2;i++)
   { c++;
   c++;
    if(n%i==0)
    { c++;
     flag=0;
     c++;
     break;
    }
   
   }
   c++;
  if(flag)
  {c++;
  printf("\n%d is a prime number",n);
  }
  else{
  c++;
  printf("\n%dnot a prime number",n);
  }
  c++;
  printf("\nnumber of steps algo: %d",c);
}

void is_prime_algo3(int n) {
	    int steps = 0;
	    int check = 1;
	    steps++;
	    steps++;
	    for (int i = 2; i < n; i++) {
	        steps++;
	        steps++;
	        if(n%i == 0) {
	            steps++;
	            check = 0;
	        }
	    }
	    if(check) {
	        steps++;
	        printf("The nnumber is prime\n");
	    } else {
	        steps++;
	        printf("The number is not prime\n");
	    }
	    printf("\n number of steps%d",steps);
	}
int main()
{ int n;
	printf("\nenter number :");
	 scanf("%d",&n);
	 printf("\nalgorithm 1:\n");
	is_prime_algo1(n);
	printf("\nalgorithm 2:\n");
	is_prime_algo2(n);
	printf("\nalgorithm 3:\n");
	is_prime_algo3(n);
	
}
