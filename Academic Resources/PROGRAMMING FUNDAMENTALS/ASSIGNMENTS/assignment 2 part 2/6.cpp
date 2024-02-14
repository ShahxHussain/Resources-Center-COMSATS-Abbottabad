#include<stdio.h>
int main()
{
	int n;
	printf("Enter Any Number: ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	
	if(n%i==0)
	{
		printf("The Devisors are: %d\n",i);
	}
}
