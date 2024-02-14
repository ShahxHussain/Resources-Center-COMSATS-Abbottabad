#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5};
	int i;
	for(i=0; i<5; i++)
	{
		printf("%dThe Given array is%d:\n",&a[i]);
	}
	for(i=5; i>=0; i--)
	{
		printf("The Reverse Order is %d:\n",a[i]);
	}
	return 0;
}
