#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter any NUMBER:  ");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("THE NUMBER IS EVEN");
		
	}
	else
	{
		printf("THE NUMBER IS ODD");
	}
	return 0;
}
