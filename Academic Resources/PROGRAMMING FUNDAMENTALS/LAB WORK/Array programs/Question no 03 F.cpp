#include<stdio.h>
int main()
{
	int i,n;
	int t1=0,t2=1;
	int next_term=t1+t2;
	
	printf("Enter The No Of terms:");
	scanf("%d",&n);
	
	printf("Fibonchi Series Are:%d, %d",t1,t2);
	
	for(i=3; i<=n; i++)
	{
		printf("%d",next_term);
		t1=t2;
		t2=next_term;
		next_term=t1+t2;
	}
	return 0;
}