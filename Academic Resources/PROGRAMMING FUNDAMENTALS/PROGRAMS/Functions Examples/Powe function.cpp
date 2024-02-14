#include<stdio.h>
void pow(int n,int p)
{
	switch(p)
	{
		case 1:
		{
				printf("%d To the  Power of %d is : %d",n,p,n);
				break;
		}
		case 2:
		{
				printf("%d To the  Power of %d is : %d",n,p,n*n);
				break;
		}
		case 3:
		{
				printf("%d To the  Power of %d is : %d",n,p,n*n*n);
				break;
		}
		case 4:
		{
				printf("%d To the  Power of %d is : %d",n,p,n*n*n*n);
				break;
		}
		case 5:
		{
				printf("%d To the  Power of %d is : %d",n,p,n*n*n*n*n);
				break;
		}
		case 6:
		{
				printf("%d To the  Power of %d is : %d",n,p,n*n*n*n*n*n);
				break;
		}
		case 7:
		{
				printf("%d To the  Power of %d is : %d",n,p,n*n*n*n*n*n*n);
				break;
		}
		case 8:
		{
				printf("%d To the  Power of %d is : %d",n,p,n*n*n*n*n*n*n*n);
				break;
		}
		case 9:
		{
				printf("%d To the  Power of %d is : %d",n,p,n*n*n*n*n*n*n*n*n);
				break;
		}
		case 10:
		{
				printf("%d To the  Power of %d is : %d",n,p,n*n*n*n*n*n*n*n*n*n);
				break;
		}
		default:
		{
			printf("\tPower is out of range [Error]\n");
		}
	}
	
	
}
int main()
{
	int n,p;
	printf("Enter Any Number : ");
	scanf("%d",&n);
	printf("Enter Power of this Number : ");
	scanf("%d",&p);
	
	pow(n,p);
}
