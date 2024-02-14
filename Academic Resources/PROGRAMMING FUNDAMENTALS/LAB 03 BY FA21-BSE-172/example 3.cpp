#include<stdio.h>
int main()
{
	char ch;
	char str[100];
	printf("Enter any Character\n");
	scanf("%c",&ch);
	
	printf("Entered character is %c\n",ch);
	printf("Enter any string (upto 100 character)\n");
	scanf("%s",&str);
	printf("Enter string is%s\n",str);
	return 0;
}