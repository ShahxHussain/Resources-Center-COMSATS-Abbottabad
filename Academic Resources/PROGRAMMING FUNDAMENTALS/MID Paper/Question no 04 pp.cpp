#include<stdio.h>
void number(int n,int number=1)
{
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			printf("%d",number);
			number++;
		}
		printf("\n");
	}
}
int main()
{   
    int n,number;
	printf("Enter the Range:");
	scanf("%d",&n);
	
	number(n=1);
}
