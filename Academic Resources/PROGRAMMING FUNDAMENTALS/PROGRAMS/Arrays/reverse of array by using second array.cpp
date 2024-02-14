#include<stdio.h>
int main()
{
	int arr[100];
	int size;
	int rev_arr[100];
	int rev_index;
	int arr_index;
	
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
		if(arr_index>=0)
		{
			rev_arr[rev_index]=arr[arr_index];
			rev_index++;
			arr_index--;
		}
	}
	printf("The reverse of the array is : \n");
	for(int i=0; i<size; i++)
	{
		printf("%d\t",rev_arr[i]);
	}
}
