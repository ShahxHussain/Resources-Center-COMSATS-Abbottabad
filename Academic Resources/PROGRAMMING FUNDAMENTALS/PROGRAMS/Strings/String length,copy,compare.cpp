#include<stdio.h>
#include<string.h>
int main()
{
	char ch1[10];
	char ch2[10];
	char ch3[10];
	printf("Enter First  String : \n");
	scanf("%s",&ch1);
	
	printf("Enter second string : \n");
	scanf("%s",&ch2);
	
	printf("The length of the first string is : %d\n",strlen(ch1));
	
	printf("The length of the second string is : %d\n",strlen(ch2));
	
	strcpy(ch3,ch2);
	
	printf("The value of the third string is : %s\n",ch3);
	
	if(strcmp(ch2,ch3)==0)
	{
		printf("Strings ch3 and ch2 are equal",ch2,ch3);
		
	}
	else
	{
		printf("Strings are not equal");
	}
	
}
