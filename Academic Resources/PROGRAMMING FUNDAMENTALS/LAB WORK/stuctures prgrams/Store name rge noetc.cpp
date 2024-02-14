#include<stdio.h>
struct student{
	int regno;
	char name[100];
	int age; 
	int marks;
};
int main()
{
	struct student s1={1122,"Mahad",17,1007};
	struct student s2={1123,"Hussain",18,1008};
	struct student s3={1124,"Abdul-Aziz",19,1009};
	
	printf("Roll No=%d Name=%s Age=%d Marks=%d\n",s1.regno,s1.name,s1.age,s1.marks);
	printf("Roll No=%d Name=%s Age=%d Marks=%d\n",s2.regno,s2.name,s2.age,s2.marks);
    printf("Roll No=%d Name=%s Age=%d Marks=%d",s3.regno,s3.name,s3.age,s3.marks);
}