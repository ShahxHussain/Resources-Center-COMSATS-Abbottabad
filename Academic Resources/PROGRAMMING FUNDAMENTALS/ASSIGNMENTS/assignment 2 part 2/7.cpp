#include<stdio.h>
int main()
{
	int n;
	printf("Enter Any Number: ");
	scanf("%d",&n);
	printf("The Factors of this Numbers are:");
	
	for(int i=1;i<=1000;i++)
	{
	
		if(i%n==0)
		{
		
			printf("\n%d",i);
		}
}
		
	
	return 0;
}
