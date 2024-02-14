#include<stdio.h>
int main()
{
	int arr[100];
	int size;
	printf("Enter size of the array : ");
	scanf("%d",&size);
	
	printf("Enter the elemnts of the array : \n");
	for (int i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("The reverse of the array is : \n");
	for(int i=size-1; i>=0; i--)
	{
		printf("%d\t",arr[i]);
	}
	
}
