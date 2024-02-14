#include<stdio.h>
int main()
{
	int a[10];
	int n;
	int count=0;
	int index;
	int repeat=0;
	int size;
	printf("Enter the size of the array : \n");
	scanf("%d",&size);
	
	printf("Enter Elements of The Array : \n");
	for(int i=0; i<size; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter Element You want to search in the Array : ");
	scanf("%d",&n);
	
	for(int i=0; i<10; i++)
	{
		if(a[i]==n)
		{
			
			//count++;
			++repeat;
			printf("Search Found %d of  at Index of a[%d] : \n",n,i);
		}
	}	
	printf("Number repeat %d times : \n",repeat);
	
	/*if(count!=0)
	{
		printf("Found\n");
	}
	else
	printf("Not found");*/
	
	
}
