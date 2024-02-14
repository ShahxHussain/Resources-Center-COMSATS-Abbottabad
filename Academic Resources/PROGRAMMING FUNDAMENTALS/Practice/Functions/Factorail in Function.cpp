#include<stdio.h>
#include<math.h>
int main()
{   
    int fact();
	printf("Enter a number");
	printf("Factorial of given number is %d",fact());
	return 0;
}
int fact()
{
	int i,fact=1,n;
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		fact=fact*i;
	}
	return fact;
}