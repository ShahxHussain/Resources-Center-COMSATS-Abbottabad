#include<stdio.h>
void star(int n)
{
	for(int i=1; i<=n; i++)
	{
		printf("*\n");
	}
}
int main()
{
	int n;
	printf("Enter Number of Iteration : ");
	scanf("%d",&n);
	
	star(n);
	
	return 0;
}
