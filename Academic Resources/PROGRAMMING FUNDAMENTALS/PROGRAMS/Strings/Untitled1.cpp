#include<stdio.h>
int main()
{
	int a[5];
	int max;
	int min;
	printf("Enter the elements of array");
	for(int i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
		
	}
	max=a[0];
	min=a[0];
	for(int i=0; i<5; i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("min = %d\n",min);
	printf("max = %d\n",max);
}
