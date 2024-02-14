#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	
printf("                  =======================================\n");
printf("                  >>PROGRAMMING FUNDAMENTALS ASSIGNMENT<< \n");
printf("                  =======================================\n\n");
printf("                  ================================\n");
printf("                  >>SUBMITTED TO: YASHER ALI SIR<<\n");
printf("                  ================================\n\n");
	
int ch,choice,repeat;
int n1,n2;
int sum,difference,product,quotient;
int age1,age2,age3;
int num;
int bill=0;
int service;
int marks;
int rows,columns,i,j;
char c;

do
{
printf("--------------------------------MENU-------------------------------------\n");
printf("-------------------------------------------------------------------------\n");
printf(" :) Press (1) to Print ALHAMDULILLAH.\n");
printf(" :) Press (2) to print NAME & REGISTRATION NUMBER.\n");
printf(" :) Press (3) to perform ARITHMITIC OPERATIONS ON TWO NUMBERS.\n");
printf(" :) Press (4) to FIND WHOSE YOUNGER AND OLDER\n");
printf(" :) Press (5) to CHECK whether the Number is EVEN or ODD.\n");
printf(" :) Press (6) for 15 percent Discount on 1500 bill\n");
printf(" :) Press (7) to Give 10 PERCENT increment of his/her year of SERVICE.\n");
printf(" :) Press (8) for GRADING SYSTEM.\n");
printf(" :) Press (9) to PRINT SYMBOL.\n");
printf(" :) Press (10) to check whether the Alphabet is VOWEL or CONSONANT.\n");
printf(" :) Press (11) to EXIT.\n");
printf("-------------------------------------------------------------------------\n");
printf("-------------------------------------------------------------------------\n");
printf("\nENTER CHOICE: \n");
scanf("%d",&choice);


switch (choice)
{

//Question 1
{
	case 1:
		printf("\n\n*************\n");
		printf("ALHAMDULILLAH");
		printf("\n*************");
		break;
}
//Question 2
{
	 case 2:
		printf("\n--------------------------------\n");
		printf("\nName: \n\tSYED SHAH HUSSAIN BADSHAH\n\nRegistration No:\n\tFA21-BSE-172\n");
		printf("--------------------------------\n");

break;
}

//Question 3
{
	case 3:
printf("\nEnter First Number: ");
scanf("%d",&n1);

printf("\nEnter Second Number: ");
scanf("%d",&n2);

printf("\nSUM=  %d",n1+n2);
printf("\nDIFFERENCE=  %d",n1-n2);
printf("\nPRODUCT=  %d",n1*n2);
printf("\nQUOTIENT=  %d\n",n1/n2);
break;
}

//Question 4

{
	case 4:

printf("\nEnter First Age: ");
scanf("%d",&age1);

printf("\nEnter Second Age: ");
scanf("%d",&age2);

printf("\nEnter Third Age: ");
scanf("%d",&age3);

if(age1>age2&&age1>>age3)
{
	printf("\n%d AGE is OLDER ONE",age1);
}
else if(age2>age1&&age2>age3)
{
	printf("\n%d AGE is OLDER ONE",age2);
}
else
{
	printf("\n%d AGE IS OLDER ONE\n",age3);
}
if(age1<age2&&age1<age3)
{
	printf("\n%d AGE is YOUNGER ONE",age1);
}
else if(age2<age1&&age2<age3)
{
	printf("\n%d AGE is YOUNGER ONE",age2);
}
else
{
	printf("\n%d AGE IS YOUNGER ONE\n",age3);
	break;
}
}
//Question 5
{
	case 5:
printf("\nEnter any NUMBER:  ");
scanf("%d",&num);
	
if(num%2==0)
	{
		printf("\nTHE NUMBER IS EVEN");
		
	}
else
	{
		printf("\nTHE NUMBER IS ODD");
	}



}

break;

//Question 6

{
	case 6:
		printf("\nEnter BILL: ");
		scanf("%d",&bill);
		
		if(bill<=1500)
		{
		printf("\nNO DISCOUNT ON %d",bill);
	}
		else
		{
		
		printf("\nYou GOT 15 PERCENT DISCOUNT on %d so YOUR NEW BILL AFTER DISCOUNT IS:Rs:  %d",bill,bill-(bill/100)*15);
		break;
	}
	
//Question 7

	{
	
	case 7:
		
		
		printf("\nEnter YEARS OF SERVICE: ");
		scanf("%d",&service);
		
		if(service<=5)
		{
		
		printf("\nNO INCREMENT");
		}
		else
		{
			printf("\n10 PERCENT INCREMENT");
			break;
			}	
	}
	
	
	//Question 8
	{	
	case 8:
		printf("\n---------------------------------------");
		printf("\nCOMSATS UNIVERSITY GRADING SYSTEM\n");
		printf("-----------------------------------------\n");
		printf("\nENTER YOUR MARKS: ");
		scanf("%d",&marks);
		
		if(marks>=85&&marks<=100)
		{
			printf("\nYOU GOT GRADE A and YOUR GPA IS 4.0");
			
		}
		else if(marks>=80&&marks<=84)
		{
			printf("\nYOU GOT GRADE A- and YOUR GPA IS 3.66");
			
		}
		else if(marks>=75&&marks<=80)
		{
			printf("\nYOU GOT GRADE B+ amd YOUR GPA IS 3.33");
		}
		
		else if(marks>=70&&marks<=74)
		{
			printf("\nYOU GOT GRADE B and YOUR GPA IS 3.00");
			
		}
		else if(marks>=68&&marks<=69)
		{
			printf("\nYOU GOT GRADE B- and YOUR GPA IS 2.66");
		}
		else if(marks>=64&&marks<=67)
		{
			printf("\nYOU GOT GRADE C+ and Your GPA IS 2.33");
		}
		else if(marks>=61&&marks<=63)
		{
			printf("\nYOU GOT GRADE C and YOR GPA IS 2.00");
		}
		else if(marks>=58&&marks<=60)
		{
			printf("\nYOU GOT GRADE C- and YOUR GPA IS 1.66");
		}
		else if(marks>=54&&marks<=57)
		{
			printf("\nYOU GOT GRADE D+ and YOUR GPA IS 1.33");
		}
		else if(marks>=50&&marks<=5)
		{
			printf("\nYOU GOT GRADE D and YOUR GPA IS 1.00");
		}
		else
		{
			printf("\nYOU ARE FAIL BACHA DOBARA TRY KARO HEhehehehhhhh\n");
			break;
		}
	}
	//Question 9
	{
	case 9:
	
		printf("\nENTER NUMBER OF ROWS: ");
		scanf("%d",&rows);
	
		printf("\nENTER NUMBER OF COLUMNS: ");
		scanf("%d",&columns);
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			printf("*");
		}
		printf("\n");
	
		}
		break;	
	
	return 0;
	}
	//Question 10
	{
		case 10:
			printf("\nENTER ANY ALPHABET: ");
			scanf("%c",&c);
			
			if(c=='a'||c=='A')
			{
				printf("%c is VOWEL");
			}
			else if(c=='e'||c=='E')
			{
				printf("%c is VOWEL");
			}
			else if(c=='i'||c=='I')
			{
				printf("%c is VOWEL");
			}
			else if(c=='o'||c=='O')
			{
				printf("%c is VOWEL");
			}
			else if(c=='u'||c=='U')
			{
				printf("%c is VOWEL");
			}
			else 
			{
				printf("%c is CONSONANT");
			}
	}
	
	
	
	
	//Question 11
	{
	
	case 11:
		
		printf("\nEXIT\n");
	}
}
}
printf("Do want to Rerturn to Main Menu ?\nEnter (Y or Y) for YES\nOR\nEnter (n or N) for NO.");
scanf("%d",&repeat);
scanf("%c",&ch);
}
while(ch=='y'||ch=='Y');

}
