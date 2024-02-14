#include<stdio.h>
int main()
{
	int n,p;
	printf("Enter A Number:");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			p++;
		}
	}
	if(p!=2)
	{
		printf("The Non Prime Numbers are:");
	}
	
	return 0;
}
