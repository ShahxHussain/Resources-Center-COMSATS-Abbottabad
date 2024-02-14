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
	printf("The first Number is Divisor of 2ND Number");
	
}
else
{
	printf("The first Number is NOT a Divisor of 2ND Number");
	
}
return 0;
}
