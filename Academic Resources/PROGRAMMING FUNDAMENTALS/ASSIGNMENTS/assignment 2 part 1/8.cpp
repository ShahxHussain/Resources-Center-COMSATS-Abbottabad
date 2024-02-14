#include<stdio.h>
int main()
{
	int year;
	
	printf("Enter YEAR:  ");
	scanf("%d",&year);
	
	if(year%400==0)
	{
		printf("THIS IS LEAP YEAR");
	}
	else if(year%4==0)
	{
		printf("THIS IS LEAP YEAR");
	}
	else if(year%100==0)
	{
		printf("THIS IS NOT A LEAP YEAR");
	}
	
	else
	{
	printf("THIS IS NOT A LEAP YEAR");
    }
	return 0;
}
