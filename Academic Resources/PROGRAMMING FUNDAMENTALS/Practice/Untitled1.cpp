#include<stdio.h>
#include<conio.h>
int main()
{
	int marks,total,percent=0;
	printf("Enter The marks obtained in itcp:");
	scanf("%d",&marks);
	
	printf("Enter the total marks of the subject:");
	scanf("%d",&total);
	percent=(marks*100)/total;
	
	if(percent>=50)
	printf("Congratulations You have passed this subject");
	
	getch();
}