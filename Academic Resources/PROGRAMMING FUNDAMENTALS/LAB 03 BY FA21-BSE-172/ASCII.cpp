#include<stdio.h>
int main()
{
	int a;
	printf("Enter ASCII code:  ");
	scanf("%d",&a);
	
	printf("THE NEXT FIVE ASCII VALUES ARE:  % d% d %d %d %d",a+1,a+2,a+3,a+4,a+5,a+6);
	return 0;
}