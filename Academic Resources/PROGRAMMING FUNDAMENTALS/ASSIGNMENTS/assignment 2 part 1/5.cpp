#include<stdio.h>
int main()
{
	int num1;
	int num2;
	
	printf("Enter First Number:  ");
	scanf("%d",&num1);
	
	printf("Enter Second Number:  ");
	scanf("%d",&num2);
	
	if (num1<num2)
	{
		printf("The SMALLER in BOTH THE ENTERED NUMBER IS:  %d",num1);
		
	}
	else
	{
		printf("The SMALLER in BOTH THE ENTERED NUMBER IS:  %d",num2);
	}
	return 0;
}
