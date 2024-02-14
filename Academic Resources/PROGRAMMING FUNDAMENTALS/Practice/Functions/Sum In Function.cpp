#include<stdio.h>
void sum()
{
	int n1,n2;
	printf("Enter a number");
	scanf("%d %d",&n1,&n2);
	
	int s=n1+n2;
	printf("Sum is %d",s);
}
int main()
{
	sum();
}