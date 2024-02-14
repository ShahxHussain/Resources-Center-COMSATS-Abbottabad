#include<stdio.h>
#include<conio.h>
int main()
{
	int a=10;
	int b;
	
	b= &a;
	
	printf("The value of variable is:  %d\n",a);
	printf("The address of variable b is:  %d\n",b);
	
	return 0;
	
}