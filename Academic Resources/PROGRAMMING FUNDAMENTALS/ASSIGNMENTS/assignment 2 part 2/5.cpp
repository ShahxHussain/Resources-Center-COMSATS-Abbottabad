#include<stdio.h>
int main()
{
	int num;
	int sum;
	float average;
	
	printf("Enter Any 10 Numbers: \n");
	for(int i=1;i<=10;i++)
	{
		printf("Enter Number%d: ",i);
		scanf("%d",&num);
		
		sum=sum+num;
	}
	average=sum/10.0;
	
	printf("The Sum of ALL Numbers is: %d\n The Average Of ALL Numbers is: %f",sum,average);
	
	
	
	
	
	return 0;
}
