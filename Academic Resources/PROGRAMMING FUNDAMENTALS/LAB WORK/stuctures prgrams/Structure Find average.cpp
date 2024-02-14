#include<stdio.h>
#include<string.h>
struct subject{
	int pf;
	int cal;
	int dld;
};
struct student{
	int regno;
	char name[30];
	struct subject sub;
}stu[5];
int main()
{
	int n;
	float sum=0;
    struct subject avg;
	for(int i=0; i<5;i++)
	{
		printf("\nEnter Student Details\n");
		printf("Enter reg No\n");
		scanf("%d",&stu[i].regno);
		
		printf("Enter name:\n");
		scanf("%d",&stu[i].name);
		fflush(stdin);
		printf("Enter Pf marks:\n");
		scanf("%d",&stu[i].sub.pf);
		
		printf("Enter Calculs marks:\n");
		scanf("%d",&stu[i].sub.cal);
		
		printf("Enter Dld marks:");
		scanf("%d",&stu[i].sub.dld);
		
		for(int i=0; i<5; i++)
	{
		
		sum+=stu[i].sub.pf+stu[i].sub.cal+stu[i].sub.dld;
	}
	printf("Average Marks: %f\n", sum / n);
	}
	
	
	return 0;
}