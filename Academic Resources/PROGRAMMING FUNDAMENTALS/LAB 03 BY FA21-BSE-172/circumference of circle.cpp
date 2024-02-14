#include<stdio.h>
int main()
{
	float pi=3.14;
	float radius;
	float circumference;	
	printf("Enter the value of radius\n");
	scanf("%f",&radius);
	
	circumference=2*pi*radius;
	printf("Circumference of a circle is:  %f",circumference);
	return 0;
	
	
}