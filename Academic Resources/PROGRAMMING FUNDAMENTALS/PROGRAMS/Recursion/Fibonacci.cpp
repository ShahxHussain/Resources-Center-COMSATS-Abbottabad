#include<stdio.h>
int fibonacci(int num)
{
	if(num==0)
	{
		return 0;
	}
	if(num==1)
	{
		return 1;
	}
	return fibonacci(num-1)+fibonacci(num-2);
}
int main()
{
	int x;
	printf("Enter the number for which you want to print fibonacci series : ");
	scanf("%d",&x);
	printf("The Fibonacci series of %d is : ",x);
	for(int i=0; i<x; i++)
	{
		printf("%d\n",fibonacci(i));
	}
}
