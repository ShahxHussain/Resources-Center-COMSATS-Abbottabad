#include<stdio.h>
int main()
{
	int num1;
	int num2;
	int num3;
	
	printf("Enter First Number:  ");
	scanf("%d",&num1);
	
	printf("Enter Second Number:  ");
	scanf("%d",&num2);
	
	printf("Enter Third Number:  ");
	scanf("%d",&num3);
	
	if(num1>num2&&num1>num3)
	{
		printf("The First Number:  %d is the GREATEST\n",num1);
	}
	else if(num2>num1&&num2>num3)
	{
		printf("The Second Number:  %d is The GREATEST\n",num2);
	}
	else
	{
		printf("The Third Number:  %d is GREATEST\n",num3);
	}
	if(num1<num2&&num1<num3)
	{
		printf("The First Number:  %d is the SMALLEST\n",num1);
	}
	else if(num2<num1&&num2<num3)
	{
		printf("The Second Number:  %d is The SMALLEST\n",num2);
	}
	else
	{
		printf("The Third Number:  %d is SMALLEST\n",num3);
	}
	
	return 0;
}
