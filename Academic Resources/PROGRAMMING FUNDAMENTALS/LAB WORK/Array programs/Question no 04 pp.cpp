#include<stdio.h>
void number(int n)
{
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
int main()
{   
    int n;
	printf("Enter the Range:");
	scanf("%d",&n);
	
	number(n);
}
