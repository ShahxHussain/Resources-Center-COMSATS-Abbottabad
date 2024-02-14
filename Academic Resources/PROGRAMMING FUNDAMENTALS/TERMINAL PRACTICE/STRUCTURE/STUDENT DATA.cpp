#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student{
	
	char name;
	int rollno;
	int age;
	int marks;
	
}s[100];

int i,n;
int main()
{
	//struct student;
	printf("Enter Number of student:");
	scanf("%d",&n);
	printf("===================");
	printf("\nENTER STUDENT DATA: \n");
	printf("===================\n\n");
	
	for (int i=0;i<n;i++)
	{
		printf("STUDENT %d DATA\n",i+1);
		
		printf("ENTER STUDENT NAME: \n");
		scanf("%s",&s[i].name);
		
		printf("ENTER ROLL NUMBER: \n");
		scanf("%d",&s[i].rollno);
		
		printf("ENTER AGE: \n");
		scanf("%d",&s[i].age);
		
		printf("ENTER MARKS: \n");
		scanf("%d",&s[i].marks);
	}
	
	for (int i=0;i<n;i++)
	{
	
	
	printf(" NAME= %s\nROLL NUMBER = %dAGE = %d\nMARKS = %d \n",s[i].name,s[i].rollno,s[i].age,s[i].marks);
    }
}