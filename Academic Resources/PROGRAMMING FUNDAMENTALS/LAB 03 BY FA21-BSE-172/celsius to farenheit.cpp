#include<stdio.h>
int main()
{
	float f;
	float c;
	
	printf("Enter the Temperature in CLELSIUS:  ");
	scanf("%f",&c);
	
	f=1.8*c+32;
	
	printf("THE TEMPERATURE IN FARENHEIT IS:  %f",f);
	return 0;
}