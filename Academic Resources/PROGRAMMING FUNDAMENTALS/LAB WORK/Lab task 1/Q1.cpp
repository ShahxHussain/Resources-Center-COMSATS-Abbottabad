#include<stdio.h>
int main()
{
	char a[100];
	int length=0;
	
	printf("Enter a String to calculate its length:");
	gets(a);
	
	for(int i=0; i<20 && a[i]!='\0'; i++)
	{
		length++;
	}
	
	printf("Size of Array is %d:",length);
	
	return 0;
}
	