#include<stdio.h>
#include<stdbool.h>
int main()
{
	bool a=true;
	bool b;
	
	b=!a;
	
	printf("The boolean value of a is:  %d\n",a);
	printf("The boolean value of b is:  %d\n",b);
	
	bool c=0;
	bool d=!c;
	
	printf("\n The Boolean value of c is:  %d",c);
	printf("\n The Boolean value of d is:  %d",d);
	
	return 0;
	
}