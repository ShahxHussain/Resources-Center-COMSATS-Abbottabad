#include<stdio.h>
#include<string.h>
#include<conio.h>

struct store{
	char name[100];
	int no;
	int balance;

}s[10];

int balance_less(int b)
{
	b=100;
	for (int i=0;i<3;i++)
	{
		if(s[i].balance<b)
		{
			printf("\nNAME: %s",s[i].name);
			printf("\nACCOUNT NUMBER: %d",s[i].no);
			printf("\nBALANCE: %d",s[i].balance);
		}
	}
	return 0;
}

int add_balance(int a)
{
	a=1000;
	for(int i=0;i<3;i++)
	{
		if(s[i].balance>a)
		{
			printf("\nNAME: %s",s[i].name);
			printf("\nACCOUNT NUMBER: %d",s[i].no);
			printf("\nORIGINAL BALANCE: %d",s[i].balance);
			
			printf("\nTHE INCREMENTED BALANCE IS %d",s[i].balance+100);
		}
	}
	return 0;
	
	
}
int main()
{
	int a,b;
	
	for(int i=0;i<3;i++)
	{
		printf("\nENTER CUSTOMER %d DETAILS",i+1);
		
		printf("\nENTER CUSTOMER NAME: ");
		scanf("%s",s[i].name);
		
		printf("\nENTER ACCOUNT NUMBER: ");
		scanf("%d",&s[i].no);
		
		printf("\nENTER BALANCE: ");
		scanf("%d",&s[i].balance);
	}
	
	/*printf("\nENTER BALANCE TO CHECK WHWTHER BALANCE IS LESS THAN 100 or NOT: ");
	scanf("%d",&b);
	
	printf("\nENTER BALANCE TO CHECK WHETHER BALANCE IS GREATER THAN 1000 or NOT: ");
	scanf("%d",&a);*/
	
	balance_less(b);
	add_balance(a);
	
	
}
