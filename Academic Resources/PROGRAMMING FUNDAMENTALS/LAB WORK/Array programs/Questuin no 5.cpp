#include <stdio.h>
int main()
{       
    int i,n,sum;
	float avg;
	printf("Input the 10 numbers : \n");
	for (i=1;i<=10;i++)
	{
        printf("Number:%d :",i);

		scanf("%d",&n);
		sum +=n;
	}
	
	printf("The sum of 10 no is : %d",sum);
	
	return 0;
 
}
