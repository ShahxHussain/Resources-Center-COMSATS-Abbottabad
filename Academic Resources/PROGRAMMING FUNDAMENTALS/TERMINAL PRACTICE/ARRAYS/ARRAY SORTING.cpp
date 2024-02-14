#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10];
	int temp=0;
	
	printf("ENTER ELEMENTS OF ARRAY\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("THE ORIGINAL FORM OF ARRAY IS: \n");
	for(int i=0;i<5;i++)
	{
		printf("[%d]=%d\n",i,a[i]);
	}
	
	for(int i=0;i<5;i++)
	{
		for (int j=0;i<5;i++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
			
		}
	}
	printf("\nELEMENTS OF ARRAY AFTER SORTING IS: \n");
	for(int i=0;i<5;i++)
	{
		printf("[%d]=%d\n",i,a[i]);
	}
}