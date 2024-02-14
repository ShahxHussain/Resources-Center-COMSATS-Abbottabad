#include<stdio.h>
#include<string.h>
int main()
{
	char ch[20]={'M','A','H','A','D','\0'};
	char ch2[20]={'K','H','A','N','\0'};
	
	printf("First string is :%s\n",ch);
	printf("2nd string is :%s\n",ch2);
	
	strcat(ch,ch2);
	printf("Concentrated String is :%s",ch);
	
	return 0;
}