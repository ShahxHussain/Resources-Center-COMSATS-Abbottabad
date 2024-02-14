#include<stdio.h>
#include<math.h>

double hypotenuse(double b,double p)
{
	double hyp=sqrt(pow(b,2)+pow(p,2));
	
	return hyp;
}
int main()
{
	double b,p;
	printf("Enter Base of a Right angle triangle:");
	scanf("%lf",&b);
	printf("Enter Perpendicular of a Right angle triangle:");
	scanf("%lf",&p);
	
	printf("\nThe Hyptenuse of the Right angle triangle is: %lf",hypotenuse(b,p));
	
	return 0;

}
