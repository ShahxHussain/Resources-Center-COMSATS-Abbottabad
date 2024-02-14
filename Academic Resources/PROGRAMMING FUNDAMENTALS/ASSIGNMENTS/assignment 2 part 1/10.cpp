#include<stdio.h>
int main()
{
	int days;
	
	printf("After how much Days you Returned The BOOK to Library: ");
	scanf("%d",&days);
	
	if(days>=1&&days<=5)
	{
		printf("YOU ARE FINED 50 paise");
	}
	else if(days<=6&&days<=10)
	{
		printf("YOR ARE FINED ONE RUPPEE");
	}
	else if(days<=10&&days<=30)
	{
		printf("YOU ARE FINED 5 RUPEES");
	}
	else 
	{
		printf("YOR LIBRARY MEMBERSHIP IS CANCELLED");
	}
	return 0;
}
