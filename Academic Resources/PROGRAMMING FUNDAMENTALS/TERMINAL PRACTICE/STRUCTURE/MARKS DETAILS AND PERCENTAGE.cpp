#include<stdio.h>
#include<conio.h>

struct marks{
	char name[100];
	int rollno;
	int phy_marks;
	int chem_marks;
	int math_marks;
	float total_marks;
}s[10];

int main(){
	
	float percentage;
	
	
	for (int i=0;i<2;i++)
	{
		printf("=======================\nENTER STUDENT %d details: \n=======================\n",i+1);
		
		printf("ENTER NAME: \n");
		scanf("%s",&s[i].name);
		
		printf("\nENTER ROLL NUMBER: \n");
		scanf("%d",&s[i].rollno);
		
		printf("\nENTER PHYSICS MARKS: \n");
		scanf("%d",&s[i].phy_marks);
		
		printf("\nENTER CHEMISTRY MARKS: \n");
		scanf("%d",&s[i].chem_marks);
		
		printf("\nENTER MATHEMATICS MARKS: \n");
		scanf("%d",&s[i].math_marks);
		
		
		
	}
	
	for (int i=0;i<2;i++)
	{
	s[i].total_marks=s[i].phy_marks+s[i].chem_marks+s[i].math_marks;
	printf("TOTAL MARKS of STUDENT %d: %f\n",i+1,s[i].total_marks);
	percentage=((s[i].total_marks)/300)*100;
	printf("\npercentage of STUDENT %d IS: %f",i+1,percentage);
	}
}