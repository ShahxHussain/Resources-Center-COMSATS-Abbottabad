#include<stdio.h>
void mult()
{
	int n1,n2;
	printf("Enter first Number");
	scanf("%d %d",&n1,&n2);

    int  mult=n1*n2;
    printf("The multiplication is %d",mult);
}
int main()
{
	mult();
}