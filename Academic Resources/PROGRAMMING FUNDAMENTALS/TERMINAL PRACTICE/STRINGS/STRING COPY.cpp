#include<stdio.h>
#include<string.h>
int main()
{
	char a1[100];
	char a2[100];
	
	
	printf("ENTER FIRST STRING: \n");
	gets(a1);
	
	strcpy(a2,a1);
	
	printf("THE FIRST STRING IS %s\n",a1);
	
	printf("THE SECOND STRING IS %s\n",a2);
	return 0;
	
	
	
	
}