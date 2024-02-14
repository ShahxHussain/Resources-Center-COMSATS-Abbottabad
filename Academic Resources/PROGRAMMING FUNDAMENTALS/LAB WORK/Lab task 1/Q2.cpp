#include<stdio.h>
#include<string.>
int main()
{
	char ch[20]={"Mahad khan"};
	char ch2[20];
	strcpy(ch2,ch);
	
	printf("Value Of 2nd string is :%s\n",ch);
	printf("Total string is : %d",strlen(ch2));
	
	return 0;
}