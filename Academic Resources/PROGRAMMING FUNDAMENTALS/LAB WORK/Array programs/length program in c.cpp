#include<stdio.h>
int main()
{
	char a[100];
	int length;
	
	printf("Enter a String to calculate its length:");
	scanf("%s",&a);
	
	while(a[length]!='\0')
	length++;
	
	printf("Length Of the String :%d\n",length);
	
	return 0;
}
	