#include<stdio.h>
int sum(int a,int b)
{
	return a+b;
}
int main()
{
	int a;
	int b;
	printf("Enter First Number:");
	scanf("%d",&a);
	printf("Enter Second Number:");
	scanf("%d",&b);
	printf("The First Number is = %d\n",a);
	printf("The Second Number is = %d\n",b);
	printf("Sum of %d and %d is = %d",a,b,sum(a,b));
	
}

