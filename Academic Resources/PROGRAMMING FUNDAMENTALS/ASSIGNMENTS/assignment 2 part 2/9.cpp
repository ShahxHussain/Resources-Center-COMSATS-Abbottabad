#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	int result;
	
	printf("Enter First Number: ");
	scanf("%d",&a);
	
	printf("Enter Second Number: ");
	scanf("%d",&b);
	
	result=pow(a,b);
	
	printf("The Number %d is raised to power of %d is %d ",a,b,result);
	return 0;
}
