#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	
	printf("ENTER ANY STRING in LOWER CASE");
	gets(a);
	
	printf("THE STRING IS UPPER CASE IS %s",strupr(a));
	
	return 0;
	
	
	
	}