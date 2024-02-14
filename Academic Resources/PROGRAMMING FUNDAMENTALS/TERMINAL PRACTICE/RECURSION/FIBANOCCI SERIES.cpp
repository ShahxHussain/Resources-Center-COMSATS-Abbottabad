#include<stdio.h>
#include<conio.h>
int fibanocci(int num)
{
	if(num==0){
		return 0;
	}
	if (num==1){
		return 1;
	}
	else
	return fibanocci(num-1)+fibanocci(num-2);
}
int main()
{
	int n;
	printf("ENTER SERIES UPTO WHICH YOU WANT PRINT FIBANOCCI: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("%d",fibanocci(i));
	}
}
