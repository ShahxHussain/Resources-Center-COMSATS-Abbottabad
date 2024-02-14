#include<stdio.h>
int main()
{
	int arr[100];
	int size; 
	int arr_index;
	int rev_index;
	int temp=0;
	
	printf("Enter the size of the array : \n");
	scanf("%d",&size);
	
	printf("Enter the elements of the array : \n");
	for(int i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	rev_index=0;
	arr_index=size-1;
	for(int j=size-1; j>=0; j--)
	{
		if(rev_index<arr_index)
		{
			temp=arr[rev_index];
			arr[rev_index]=arr[arr_index];
			arr[arr_index]=temp;
			
			arr_index--;
			rev_index++;
		}
	}
	printf("The reverse of the given array is : \n");
	for(int i=0; i<size; i++)
	{
		printf("%d\t",arr[i]);
	}
}
