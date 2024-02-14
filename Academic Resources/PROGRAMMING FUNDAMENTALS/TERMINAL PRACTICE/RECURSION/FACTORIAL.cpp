#include<stdio.h>
#include<conio.h>
int fact(int num)
{
	if(num==0||num==1)
	{
		return 1;
	}
	else{
		return num*(fact(num-1));
	}
}
int main()
{
	int num;
	printf("ENTER NUMBER TO FIND ITS FACTORIAL: \n");
	scanf("%d",&num);
	
	printf("THE FACTORIAL OF %d is: %d",num,fact(num));
}
