#include<stdio.h>
int main()
{
	float radius;
	float area;
	printf("Enter the RADIUS of a circle:  ");
	scanf("%f",&radius);
	
	area=3.14*radius*radius;
	
	printf("AREA OF A CIRCLE IS:   %f\n",area);
	return 0;
	
}