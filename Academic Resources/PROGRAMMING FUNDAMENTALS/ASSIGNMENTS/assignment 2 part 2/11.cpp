#include<stdio.h>
int main()
{
	int n;
	int prime=0;
	
	printf("Enter Any Number: ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			prime++;
		}
	}
	if(prime==2)
	{
		printf("%d is a PRIME NUMBER",n);
	}
	else
	{
		printf("%d is NOT a PRIME NUMBER",n);
	}
			return 0;
			
	}
	
