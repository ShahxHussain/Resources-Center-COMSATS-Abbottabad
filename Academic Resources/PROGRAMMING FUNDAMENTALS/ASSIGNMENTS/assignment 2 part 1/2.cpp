#include<stdio.h>
int main()
{
	int num1;
	int num2;
	
	printf("Enter First Number:  ");
	scanf("%d",&num1);
	
	printf("Enter Second Number:  ");
	scanf("%d",&num2);
	
	if(num2%num1==0)
	{
		printf("The First Number is a factor of Second Number");
	}
	else
	{
	
	printf("The First Number is NOT a Factor of Second Number");
    }
	return 0;
}
