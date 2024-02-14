#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,a,b;
	a=20;
	x=--a;
	
	printf("PRE DECREMENT OPERATOR");
	
printf("\n The Value of x is %d",x);
	printf("\n The Value of a is %d",a);
	
	b=30;
	y=b--;
	
	printf("\n\n POST DECREMENT OPEARTOR");
	printf("\n The Value of y is %d",y);
	
	printf("\n The Value of b is %d",b);
	
	return 0;
	
	
}
