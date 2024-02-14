#include<stdio.h>
int main()
{
	int a[5];
	int max;
	int min;
	printf("Enter Elements of the Array :\n");
	for(int i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
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
	printf("Max = %d\n",max);
	printf("min = %d\n",min);
}
