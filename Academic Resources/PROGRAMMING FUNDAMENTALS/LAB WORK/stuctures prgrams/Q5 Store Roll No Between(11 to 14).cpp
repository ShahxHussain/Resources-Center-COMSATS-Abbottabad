#include <string.h>
#include<stdio.h>

struct student {
  int roll_no;
  char name[30];
  int age;
  char address[40];
};

void checkAge(struct student stud[], int n) 
{
  printf("Students whose age is 14\n");
  for(int i = 0; i < n; i++) {
    if(stud[i].age == 14) {
      printf("Name : %s\n", stud[i].name);
    }  
  }
}

void checkRoll(struct student stud[], int n)
 {
  printf("Students with even roll no.\n");
  for(int i = 0; i < n; i++) {
    if(stud[i].roll_no%2 == 0) {
      printf("Name : %s\n", stud[i].name);
    }
  }
}

void getDetails(struct student stud[], int n) 
{
  printf("Enter roll no.\n");
  int roll;
  scanf("%d", &roll);
  printf("Student details with given roll no.");
  for(int i = 0; i < n; i++) {
    if(stud[i].roll_no == roll) {
      printf("Roll No. : %d\n", stud[i].roll_no);
      printf("Name : %s\n", stud[i].name);
      printf("Age : %d\n", stud[i].age);
      printf("Address : %s\n", stud[i].address);
    }  
  }
}

int main() {
  int n;
  
  printf("Enter number of students");
  scanf("%d", &n);
  
  struct student stud[n]; 
  for(int i = 0; i < n; i++) {
    printf("Student %d\n",i+1);
    printf("Enter roll no. :\n");
    scanf("%d", &stud[i].roll_no);
    printf("Enter name :\n");
    scanf("%s",stud[i].name);
    printf("Enter age :\n");
    scanf("%d", &stud[i].age);
    printf("Enter address :\n");
    scanf("%s",stud[i].address);
  }
  
  checkAge(stud, n); 
  checkRoll(stud, n);  
  getDetails(stud, n);  
  
  return 0;
}
