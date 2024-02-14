#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	printf("ENTER ANY STRING\n");
	gets(a);
	
	printf("THE STRING BEFORE TOGGLING IS %s\n",a);
	
	for(int i=0;a[i]!='\0';i++)
	{
	
	
	
	if(a[i>='A'&& a[i]<='Z')
	{
	a[i]=a[i]+32;
	}	
	 else if(a[i]>='a'&&a[i]<='z')
	 {
	 
	a[i]=a[i]-32;
	}
}
	printf("THE STRING AFTER TOGGLING IS %s\n",a);
	
	
}
