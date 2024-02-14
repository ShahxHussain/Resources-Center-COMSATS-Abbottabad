#include<stdio.h>
#include<string.h>
int main()
{
	char ch[20];
	int count=0, i;
	
	printf("Enter The string:");
	gets(ch);
	
	for(i=0; ch[i]='\0'; i++)
	{
		if(ch[i]==' ' &&ch[i+1]==' ')
		{
			count++;
		}
	}
	printf("Number of word in given string is %s:",count+1);
}