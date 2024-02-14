#include<stdio.h>
int main()
{
	int a[100],n,i,s,c=0;
	
	printf("Enter No Elements in Array\n");
	scanf("%d",&n);
	
	printf("Enter %d Integer\n",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number to be search:\n");
	scanf("%d",&s);
	
	for(i=0; i<n; i++)
	{
		if(a[i]==s)
		{
			c++;
			break;
		}
	
	}
		if(c!=0)
		{
			printf("Search Found");
		}
		else
		{
			printf("Search not found");
		}
	
	return 0;
}