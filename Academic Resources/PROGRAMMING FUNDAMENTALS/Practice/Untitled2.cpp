#include<conio.h>
#include<stdio.h>
int main()
{
	int marks,total,percent=0;
	printf("Enter the marks obtained in itcp:");
	scanf("%d",&marks);
	
	printf("Enter the total marks of the subject:");
	scanf("%d",&total);
	percent=(marks*100)/total;
	
	if(percent>=50)
	{
		printf("Congratulation You have passed this subject");
	}
	
	else
	printf("Sorry You did nnot pass this course,Better luck next time");
	
	getch();
}