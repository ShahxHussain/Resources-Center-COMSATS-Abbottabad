#include<stdio.h>
#include<string.h>
int main()
{
	char ch1[10];
	char ch2[10];
	
	printf("Enter the first string : \n");
	scanf("%s",&ch1);
	
	printf("Enter the second string : \n");
	scanf("%s",&ch2);
	
	strcat(ch1,ch2);
	printf("The joining of two strings are : %s\n",ch1);
	
	printf("The modification of first array is : %s\n",strlwr(ch1));
	
	printf("The modification of second array is : %s\n",strupr(ch2));
}
