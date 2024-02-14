#include<stdio.h>
int main()
{
	int arr1[10][10];
	int arr2[10][10];
	int sum[10][10];
	int rows,columns;
	
	
	printf("Enter the size of rows and column of matrices : \n");
	scanf("%d%d",&rows,&columns);
	
	printf("Enter the elements of the first matrix : \n");
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	
	printf("Enter the elemnts of the second matrix : \n");
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	
	printf("The sum of the given two matrices are : \n");
	
	for(int i=0;i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
			sum[i][j]=arr1[i][j]+arr2[i][j];
			
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
}
