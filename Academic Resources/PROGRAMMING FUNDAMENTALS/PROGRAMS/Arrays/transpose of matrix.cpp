#include<stdio.h>
int main()
{
	int i,j;
	int r,c;
	int matrix[10][10];
	int transpose[10][10];
	
	printf("Enter the size of rows and columns of the matrix : \n");
	scanf("%d%d",&r,&c);
	
	printf("Enter the elemnts of %dx%d matrix : \n",r,c);
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			transpose[j][i]=matrix[i][j];
		}
	}
	
	printf("The transpose of the given %dx%d matrix is : \n",r,c);
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",transpose[i][j]);
		}
		printf("\n");
	}
	return 0;
}
