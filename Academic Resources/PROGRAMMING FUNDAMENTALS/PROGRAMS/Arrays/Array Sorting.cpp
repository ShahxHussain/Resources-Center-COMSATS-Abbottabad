#include<stdio.h>
int main()
{
	int a[5];
	int temp=0;
	
	printf("Enter The Elements of The Array :\n");
	for(int i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The Original Elements of the Array is :\n");
	for(int i=0; i<5; ++i)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Elements of the Array after sorting :\n");
	for(int i=0; i<5; i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}

}
