#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,a,b;
	a=10;
	x=++a;
	
	printf("PRE INCREMENT OPERATOR");
	printf("\n The Value of x is:  %d",x);
	printf("\n The Value of a is:  %d",a);
	
	b=20;
	y=b++;
	
	printf("\n\n POST ENCREMENT OPERATOR");
	printf("\n The VAlue of y is  %d",y);
	
	printf("\n The Vlaue of b is  %d", b);
	return 0;
	
}