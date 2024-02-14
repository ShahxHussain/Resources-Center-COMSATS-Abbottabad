#include<stdio.h>
int main()
{
	char z[100];
	printf("Input the array:");
	for(int i=0; i<5 && i<z[i]!='\0'; i++)
	{
		gets(z);
	}
	for(int i=0; i<5 && i<z[i]!='\0'; i++)
	{
		printf("%s",z[i]);
	}
	for(int i=5; i<0; i--)
	{
		printf("The Reverse Order is:",i);
	}
	return 0;
}