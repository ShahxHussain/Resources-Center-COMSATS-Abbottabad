#include<stdio.h>
int square(int n)
{
	int sqr=n*n;
	
	return sqr;
}
int main()
{
	int n;
	printf("Enter any Number to calculate its power : ");
	scanf("%d",&n);
	
	printf("The square of %d is : %d",n,square(n));
}

