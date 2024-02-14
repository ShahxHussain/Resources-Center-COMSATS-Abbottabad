#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	int positive=0,negative=0,zero=0;
	printf("Enter Ist Number:");
	scanf("%d",&a);
	
	printf("Enter 2nd Number:");
	scanf("%d",&b);
	
	printf("Enter 3rd Number:");
	scanf("%d",&c);
	
	if(a>0)
	{
		positive++;
	}
	else if(a<0)
	{
		negative--;
	}
	else
	{
		zero++;
	}
	
	
		if(b>0)
	{
		positive++;
	}
	else if(b<0)
	{
		negative--;
	}
	else
	{
		zero++;
	}
	
	
		if(c>0)
	{
		positive++;
	}
	else if(c<0)
	{
		negative--;
	}
	else
	{
		zero++;
	}
	
	printf("Positive number:%d  \nNegative number is:%d \nNumber of zeros:%d",positive,negative,zero);
	
	return 0;
	
	
}