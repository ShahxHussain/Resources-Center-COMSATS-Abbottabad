#include<stdio.h>
#include<string.h>
int main()
{
	char ch[20];
	char ch2[20];
	printf("Enter any String:");
	gets(ch);

	if(ch==strrev(ch))
	{
		printf("The String is Palandrom");
	}
	else
	{
		printf("The string is not Palandrom");
	}
	
	return 0;
}