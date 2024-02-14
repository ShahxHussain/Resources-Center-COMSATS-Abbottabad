#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int alpha;
	int digit;
	int special;
	
	printf("ENTER ANY STRING\n");
	gets(a);
	
	for (int i=0;a[i]!='\0';i++)
	
	{
		if (a[i]=='a'|| a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		{
			vowel++;
			{
				printf("VOWELS = %d",vowel);
			}
		}
		
		else if(a[i]>='0'&&a[i]<='9')
		{
			digit++;
			{
				printf("DIGITS = %d",digit);
			}
		}
		else
		special++;
		{
			printf("SPECIAL CHARACTER = %d");
		}
	}
}