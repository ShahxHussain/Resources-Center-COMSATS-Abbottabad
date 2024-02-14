#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	int elements;
	char a[100];
	int n;
	int count=0;
	
	printf("\nENTER NUMBER OF ELEMENTS: ");
	scanf("%d",&elements);
	
	printf("\nENTER ELEMENTS: ");
	for(int i=0;i<elements;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nENTER WHAT YOU WANT TO SEARCH: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
	
		if(n==a[i])
		{
			count++;
		}
	}
	if(count!=0)
	{
		printf("\nSEARCH FOUND");
	}
	else
	{
		printf("Search Not Found");
	}
}