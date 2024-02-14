#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int count=0;
	
	printf("ENTER ANY STRING \n");
	gets(a);
	
	for (int i=0;a[i]!='\0';i++)
	{
		count++;
		

	}
	
	printf("THE LENGHT OF A STRING IS %d",count);
	return 0;
}