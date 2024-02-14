#include<stdio.h>
int main()
{
	int x,y;
	
	printf("Enter first Number");
	scanf("%d",&x);
	
	printf("Enter second number");
	scanf("%d",&y);
	
	printf("\n %d&&%d=%d",x,y,x&&y);
	printf("\n %d||%d=%d",x,y,x||y);
	
	return 0;
	
}
