#include<stdio.h>
int main()
{
	int sum;
	for(int i=1;i<=100;i++)
	if(i%7==0)
	{
		printf("%d\n",i,sum);
		sum+=i;
	}
	printf("The Sum of ALL Multiples of 7 from 1 to 100 is: %d",sum);
	
	return 0;
}
