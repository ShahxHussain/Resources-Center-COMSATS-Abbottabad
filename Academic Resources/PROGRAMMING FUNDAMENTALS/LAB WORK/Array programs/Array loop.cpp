#include<stdio.h>
int main()
{
char z[100];
printf("Enter Name Plz :\n");
	gets(z);
	int i;
for(i=0; i<5; i++)
{
	printf("%s \t",z);
}

return 0;
}