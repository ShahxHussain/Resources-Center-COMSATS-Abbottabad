#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int num=1;
	
	printf("ENTER ANY STRING\n");
	gets(a);
	
	for (int i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ' || a[i]=='\t' || a[i]=='\n')
		{
			num++;
		}

	}
	
	printf("THE WORD IN A STRING IS %d",num);
	
	return 0;
	
	
}
