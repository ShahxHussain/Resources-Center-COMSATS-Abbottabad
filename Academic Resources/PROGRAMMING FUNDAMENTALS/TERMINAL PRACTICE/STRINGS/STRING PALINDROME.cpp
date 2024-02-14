#include<stdio.h>
#include<string.h>

int main()
{
	char a[100];
	char b[100];
	
	printf("ENTER ANY STRING: \n");
	gets(a);
	
	
	strcpy(b,a);
	strrev(b);

	
	if(!strcmp(a,b))
	{
		printf("THE STRING IS PALINDROME");
	}
	else
	{
		printf("NOT A PALINDROME ");
	}
}