#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	char r[100];
	int begin;
	int end;
	int count=0;
	
	
	printf("ENTER ANY STRING\n");
	gets(s);
	
	printf("THE ORIGINAL STRING IS %s\n\n",s);
	
	while(s[count]!='\0')
	{
		count++;
	}
	end=count-1;
	
	for(begin=0;begin<count;begin++)
	{
		r[begin]=s[end];
		end--;
	}	
	r[begin]='\0';
	
	printf("THE REVERSE OF A STRING IS %s",r);
	}
	
