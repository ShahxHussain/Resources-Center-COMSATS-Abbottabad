#include<stdio.h>
int main()
{
	int a;
	int b;
	
	printf("Enter first Integer:  ");
	scanf("%d",&a);
	printf("Enter second Integer:  ");
	scanf("%d",&b);
	
	printf("%d<%d=%d\n",a,b,a<b);
	printf("%d<=%d=%d\n",a,b,a<=b);
	printf("%d>%d=%d\n",a,b,a>b);
	printf("%d<=%d=%d\n",a,b,a<=b);
	printf("%d==%d=%d\n",a,b,a==b);
	printf("%d!=%d=%d\n",a,b,a!=b);
	
	return 0;
}