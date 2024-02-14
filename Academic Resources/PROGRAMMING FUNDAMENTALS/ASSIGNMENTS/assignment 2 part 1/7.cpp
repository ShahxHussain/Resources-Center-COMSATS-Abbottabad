#include<stdio.h>
int main()
{
	int a,b,c,sides;
	
	printf("Enter VALUE of Side a:  ");
	scanf("%d",&a);
	
	printf("Enter VALUE of Side b:  ");
	scanf("%d",&b);
	
	printf("Enter VALUE of Side c:  ");
	scanf("%d",&c);
	
	if(a>b)
	{
		sides=((b+c)>a);
	}
	else if(b>c)
	{
		sides=((a+c)>b);
	}
	else
	{
		sides=((a+b)>c);
	}
	if (sides)
	{
		printf("TRIANGLE IS VALID\n");
	}
	else
	{
		printf("TRIANGLE IS INVALID");
	}
	return 0;
}
