#include<stdio.h>
int main()
{
	int a=9;
	int b=4;
	int c;
	
	c=a+b;
	printf("a+b = %d\n",c);
	
	c=a-b;
	printf("a-b = %d\n",c);
	
	c=a*b;
	printf("a*b = %d\n",c);
	
	c=a/b;
	printf("a/b = %d\n",c);
	
	c=a%b;
	printf("Reminder when divided by b:  %d\n",c);
	
	return 0;
}