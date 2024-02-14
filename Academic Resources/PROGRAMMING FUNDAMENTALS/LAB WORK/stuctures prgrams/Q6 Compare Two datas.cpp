#include<stdio.h>
#include<conio.h>
#include<string.h>
struct date
{
 int date;
 int month;
 int year;
};
int main ()
{
 int i,f=0;  struct date d[2]; 
 for(i=0;i<2;i++)
 {
  printf("\nEnter day for the %dth date\n",i+1);
  scanf("%d",&d[i].date);

  printf("\nEnter the month for the %dth date\n",i+1);
  scanf("%d",&d[i].month);

  printf("\nEnter the year for the %dth date\n",i+1);
  scanf("%d",&d[i].year);
 }
 if(d[0].date==d[1].date)
 {
  if(d[0].month==d[1].month)
  {
   if(d[0].year==d[1].year)
  {
    f=1;
   }
  }
 }
 if(f==1)
  printf("\nThe dates are equal");
 else
  printf("\nThe dates are not equal");

 printf ("\n\npress any key to close Thanks.");
 getch();
}