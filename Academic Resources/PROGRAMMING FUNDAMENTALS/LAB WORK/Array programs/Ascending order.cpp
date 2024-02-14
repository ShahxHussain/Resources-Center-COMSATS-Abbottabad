#include<stdio.h>
int main()
{
	int a[]={1,5,6,3,9};
	int j,i;
	for(i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++)                        
		{
			if(a[i]>a[j])
			{
			int temp=a[i];
		    a[i]=a[j];
		    a[j]=temp;
			}
			
		}
		
    }
    printf("The Ascending order is:\n");
    for(i=0; i<5; i++)
    {
    printf("%d\n",a[i]);
    }
} 