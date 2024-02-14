#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5];
	int i,sum=0;
	
	printf("Enter The array of element:\n");
	for(i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<5; i++)
	{
		sum=sum+a[i];
	}
	printf("Sum of the given array elements=%d",sum);
	
	return 0;
}