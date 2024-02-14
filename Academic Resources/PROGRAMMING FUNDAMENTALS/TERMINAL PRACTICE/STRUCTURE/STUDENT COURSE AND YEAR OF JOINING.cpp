#include<stdio.h>
#include<conio.h>
#include<string.h>

struct students{
	char name[100];
	int rollno;
	char course[100];
	char dep[100];
	int year;
}s[10];

void particular_year(int y)
{
	for(int i=0;i<1;i++)
	{
		if(y==s[i].year)
		{
			printf("\nTHE DATA OF STUDENT WITH corresponding ROLL NUMBER");
			
			printf("\nNAME: %s",s[i].name);
			printf("\nROLL NUMBER: %d",s[i].rollno);
			printf("\nCOURSE: %s",s[i].course);
			printf("\nDEPARTMENT: %s",s[i].dep);
			printf("\nYEAR OF JOINING %d",s[i].year);
			
		}
	}
}
void roll_no(int r)
{
	
	for(int i=0;i<1;i++)
	{
		if(r==s[i].rollno)
		{
			printf("\nTHE DATA OF STUDENT WITH SAME YEAR OF JOINING");
			
			printf("\nNAME: %s",s[i].name);
			printf("\nROLL NUMBER: %d",s[i].rollno);
			printf("\nCOURSE: %s",s[i].course);
			printf("\nDEPARTMENT: %s",s[i].dep);
			printf("\nYEAR OF JOINING %d",s[i].year);
			
		}
	}
	
}

int main()
{
	int y,r;
	struct students;
	
	for(int i=0;i<1;i++)
	{
		printf("ENTER STUDENT %d details\n",i+1);
		
		printf("\nENTER NAME: ");
		scanf("%s",s[i].name);
		
		printf("\nENTER ROLL NUMBER: ");
		scanf("%d",&s[i].rollno);
		
		printf("\nENTER COURSE: ");
		scanf("%s",s[i].course);
		
		printf("\nENTER DEPARTMENT: ");
		scanf("%s",s[i].dep);
		
		printf("\nENTER YEAR OF JOINING: ");
		scanf("%d",&s[i].year);
	}
	printf("\nENTER YEAR OF DATA: ");
	scanf("%d",&y);
	
	particular_year(y);
	roll_no(r);
	
	return 0;
}
