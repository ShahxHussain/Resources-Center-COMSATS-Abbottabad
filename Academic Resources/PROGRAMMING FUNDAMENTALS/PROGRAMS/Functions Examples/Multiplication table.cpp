#include<stdio.h>
void table(int x)
{
	printf("\n=============================================\n");
	printf("**    The Multiplication Table of %d is    **",x);
	printf("\n=============================================\n");
	int z;
	for(int i=1; i<=10; i++)
	{
		printf("%d X %d = %d\n",x,i,z=x*i);
	}
}
int main()
{
	char y;
	int x;
	int z;
	
	do{
		printf("Enter the Number for which you want a Multiplication Table:");
		scanf("%d",&x);
		table(x);
		printf("\nDo you want to repeat press y/Y for Yes\n");
		scanf("%d",&z);
		scanf("%c",&y);
	}while(y=='y'||y=='Y');
}
