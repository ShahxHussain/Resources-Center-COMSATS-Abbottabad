#include<stdio.h>
int sum(int a,int b)
{
	return a+b;
}
void prime(int a, int b)
{
	int count=0;
	for(int i=1; i<sum(a,b); i++)
	{
		int s=sum(a,b);
		if(s%i==0)
		{
			count++;
		}
	
	}
	if(count!=2)
	{
		printf("The sum of %d and %d is prime.",a,b);
	}
	else
	printf("The sum of %d and %d is not prime.",a,b);
	
}
int main()
{
	int a,b;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	
	printf("Sum of %d and %d is : %d\n",a,b,sum(a,b));
	
	prime(a,b);
}
