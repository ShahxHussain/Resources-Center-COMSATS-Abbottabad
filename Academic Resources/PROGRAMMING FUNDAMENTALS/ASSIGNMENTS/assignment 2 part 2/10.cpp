#include<stdio.h>
int main()
{
	int num;
	int n=1;
	
	printf("Enter Any Number: ");
	scanf("%d",&num);
	
	for(int i=1;i<=num;i++)
	
	n*=i;
	
	printf("The Value of %d! is %d: ",num,n);
	return 0;
}
