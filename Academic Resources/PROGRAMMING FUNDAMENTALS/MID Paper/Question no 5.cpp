#include<stdio.h>
int num1;
int main()
{  
    int n,sum;
    printf("Enter the numbers:");
    scanf("%d",&n);
	for(int num1; num1<=n; num1++)
	{
	
	if(num1%2!=0)
	{
		printf("The Odd Numbers are %d\n",num1);
		
		sum+=num1;
		printf("The Sum is %d:",sum);
	}
	
	
    }
	return 0;
}
