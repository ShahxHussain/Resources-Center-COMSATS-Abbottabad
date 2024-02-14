#include<stdio.h>
int fact(int);

void main()
{    
    int no,factorail;
	printf("Enter a number");
	scanf("%d",&no);
	factorail=fact(no);
	printf("factorail of no is %d",no,factorail);
}
  
    int fact(int n)   
{   
    int i,f=1;
	for(i=1; i<=n; i++)
	{
		f=f*i;
	}
	return f;
}