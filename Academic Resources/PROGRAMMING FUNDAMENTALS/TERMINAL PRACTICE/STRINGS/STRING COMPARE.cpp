#include<stdio.h>
#include<string.h>

int main()
{
	char a[100];
	char b[100];
	
	
	printf("ENTER FIRST STRING\n");
	gets(a);
	
	printf("ENTER SECOND STRING\n");
	gets(b);
	
	if(strcmp(a,b)==10)
	{
		printf("BOTH ARE EQUAL");
		
	}
	else
	{
		printf("NOT EQUAL");
		
	}
	
	
}