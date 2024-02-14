#include<stdio.h>
#include<string.>
int main()
{
	char ch[20];
	printf("Enter the string:");
	gets(ch);
	
	printf("Original String is:");
	puts(ch);
	
	printf("The Reverse Of The String is :%s",strrev(ch));
	
	return 0;
}