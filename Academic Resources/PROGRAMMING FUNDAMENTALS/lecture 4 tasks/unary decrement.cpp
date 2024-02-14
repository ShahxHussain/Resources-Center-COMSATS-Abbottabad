#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,a,b;
	a=10;
	x=--a;
	printf("pre Decrement Operator");
	
	printf("\n The value of x is: %d",x);
	printf("\n The value of a is: %d",a);
	
	b=20;
	y=b--;
	
	printf("\n\n Post Decrement Operator");
	
	printf("\n The value of y is: %d",y);
	printf("\n The value of b is: %d",b);
	
	return 0;
}