#include<stdio.h>
#include<string.h>
int main()
{
	char a[120];
	char b[100];
	
	printf("ENTER FIRST STRING \n");
	gets (a);
	
	printf("ENTER SECOND STRING\n");
	gets(b);
	
	strcat(a,b);
	
	printf("THE CONCATENATED STRING IS %s",a);
	
}