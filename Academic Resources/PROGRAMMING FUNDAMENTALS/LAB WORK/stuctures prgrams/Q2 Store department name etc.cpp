#include<stdio.h>
struct students{
	int regno;
	char name[100];
	char department[500];
	char course[500];
	int year;
}studt[450];
int main()
{
	int n,m;
   printf("Enter the Number of students:");
   scanf("%d",&n);
   printf("Enter The Year:");
   scanf("%d",&m);	
	for(int i=0; i<n; i++)
	{
		printf("=========================================\n");
		printf("The data of Students are\n");
		printf("Enter Reg no:");
		scanf("%d",&studt[i].regno);
		
		printf("Enter Name:");
		scanf("%s",studt[i].name);
		
		printf("Enter Department Name:");
		scanf("%s",studt[i].department);
		
		printf("Enter the course:");
		scanf("%s",studt[i].course);
		
		printf("Enter the year:");
		scanf("%s",&studt[i].year);
	}
	
	printf("Data of students Are:");
	for(int i=0; i<n; i++)
	{
		printf("The Reg N0 is %d:",studt[i].regno);
		printf("The Name of student is  %s:",studt[i].name);
		printf("The Reg N0 is %s:",studt[i].department);
		printf("The Reg N0 is %s:",studt[i].course);
		printf("The Reg N0 is %d:",studt[i].year);
	}
	
	return 0;
	
}