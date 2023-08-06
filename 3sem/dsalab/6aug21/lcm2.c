include<stdio.h>
int lcm(int,int);
int lcm(int n1,int n2)
{
	int lcm,r,numo,deno;
	if(n1>n2)
	{
		numo=n1;
		deno=n2;
	}
	else
	{
		numo=n2;
		deno=n1;
	}
	r=numo%deno;
	while(r!=0)
	{
		numo=deno;
		deno=r;
		r=numo%deno;
	}
	lcm=n1*n2/deno;
	printf("lcm of %d and %d is %d",n1,n2,lcm);
}
int main()
{
	int n1,n2;
	printf("enter two numbers\n");
	scanf("%d%d",&n1,&n2);
	lcm(n1,n2);
}
/*int lcm(int n1,int n2)
{
	int lcm,r,numo,deno;
	if(n1>n2)
	{
		numo=n1;
		deno=n2;
	}
	else
	{
		numo=n2;
		deno=n1;
	}
	r=numo%deno;
	while(r!=0)
	{
		numo=deno;
		deno=r;
		r=numo%deno;
	}
	lcm=n1*n2/deno;
	printf("lcm of %d and %d is %d",n1,n2,lcm);*/
}
