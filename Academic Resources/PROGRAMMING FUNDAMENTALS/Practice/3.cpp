#include<conio.h>
#include<stdio.h>
int main()
{
	int value;
	printf("Enter a number");
	scanf("%d",&value);
	
	if(value>0)
	printf("The value you have entered is a positive number");
	
	else
	printf("The value you have entered is a negative value");
	
	getch();
}