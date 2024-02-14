#include<stdio.h>
int main()
{
	char z[100];
	int c=0;
	printf("Input The String:");
	scanf("%s",&z);
	
	for(int i=0; i<100 && z[i]!='\0'; i++)
    {
	
		if(z[i]=='a'||z[i]=='A'||z[i]=='e'||z[i]=='E'||z[i]=='o'||z[i]=='O'||z[i]=='u'||z[i]=='U')
		{
			c++;
		}
	}
    printf("The Number Of Vowels Are: %d",c);
}
