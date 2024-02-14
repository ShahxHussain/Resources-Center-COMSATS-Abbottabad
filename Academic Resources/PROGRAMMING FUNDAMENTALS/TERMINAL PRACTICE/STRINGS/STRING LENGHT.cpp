#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int count;
	
	printf("ENTER ANY STRING \n");
	gets(a);
	
	printf("THE LENGHT OF STRING IS %d\n",strlen(a));
	return 0;
}