#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e;
	printf("Enter Ist Number:");
	scanf("%d",&a);
	
	printf("Enter 2nd Number:");
	scanf("%d",&b);
	
	printf("Enter 3rd Number:");
	scanf("%d",&c);
	
    printf("Enter 4th Number:");
	scanf("%d",&d);
	
    printf("Enter 5th Number:");
	scanf("%d",&e);
	
	if(a<b&&a<c&&a<d&&a<e)
	{
		printf("%d is smallest",a);
	}
	
	else
	if(b<a&&b<c&&b<d&&b<e)
	{
		printf("%d is smallest",b);
	}
	
	else
	if(c<a&&c<b&&c<d&&c<e)
	{
		printf("%d is smallest",c);
	}
	
	else
	if(d<a&&d<b&&d<c&&d<e)
	{
		printf("%d is smallest",d);
	}
	
	else
	if(e<a&&e<b&&e<c&&e<d)
	{
		printf("%d is smallest",e);
	}
	
	getch();
	
}