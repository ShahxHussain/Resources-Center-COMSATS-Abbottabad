#include<stdio.h>
void marks(int m)
{
	if(m>=90)
	{
		printf("You Got Excellent grade:");
	}
	else if(m>=85&&m<=89)
	{
		printf("You got A- grade:");
	}
	else if(m>=80&&m<=84)
	{
		printf("You got B+ grade:");
	}
	else if(m>=75&&m<=79)
	{
		printf("You got B(Good) grade:");
	}
	else if(m>=70&&m<=74)
	{
		printf("You got B- grade:");
	}
	else if(m>=65&&m<=69)
	{
		printf("You Got C+ grade:");
	}
	else if(m>=60&&m<=64)
	{
		printf("You got c(average marks)");
	}
	else if(m>=55&&m<=59)
	{
		printf("You got C- grade");
	}
	else if(m>=50&&m<=54)
	{
		printf("You Got D(Minium Marks:)");
	}
	else
	{
		printf("You Got Fail:");
	}
}
int main()
{
	int m;
	printf("Enter Your Marks To Know Your garde:");
	scanf("%d",&m);
	
	marks(m);
}