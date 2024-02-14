#include<stdio.h>
int main()
{
	int time_taken;
	
	printf("Enter The TIME TAKEN by the Worker in Hours:  ");
	scanf("%d",&time_taken);
	
	if(time_taken==0)
	{
		printf("Tu tho Sach mein SUPERMAN hai");
	}
	else if(time_taken<=2&&time_taken<=3)
	{
		printf("The Worker is highly Efficient");
	}
	else if(time_taken<3&&time_taken<=4)
	{
	printf("The Worker Need to improve his/her Speed");
	}
	else if(time_taken<4&&time_taken<=5)
	{
		printf("The Worker is given Training To Improve Speed");
	}
	else if(time_taken==0)
	{
		printf("Tu tho sach mein SUPERMAN hai");
	}
	else if(time_taken>5)
	{
		printf("Tu Mera puthar Chutti kr");
	}
	else
	{
	
	printf("\nGOOD BYE SEE U SOON");
    } 
	return 0;
}
