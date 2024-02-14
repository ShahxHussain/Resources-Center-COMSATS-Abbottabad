#include<stdio.h>
int main()
{
	int hours;
	int minutes;
	int seconds;
	
	printf("Enter hours: ");
	scanf("%d",&hours);
	hours=hours*3600;
	
	printf("Enter minutes:  ");
	scanf("%d",&minutes);
	minutes=minutes*60;
	
	printf("Enter seconds:  ");
	scanf("%d",&seconds);
	seconds=seconds;
	
	seconds=hours+minutes+seconds;
	printf("THE TIME IN SECONDS IS: %d",seconds);
	return 0;
	
}