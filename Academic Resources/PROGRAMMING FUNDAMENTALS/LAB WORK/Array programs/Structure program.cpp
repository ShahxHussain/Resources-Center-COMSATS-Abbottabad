#include<stdio.h>
struct car{
	int model;
	char color[20];
	char company[20];
};
int main()
{
	struct car c1={2022,"Black","Honda"};
	struct car c2={2021,"grey","Toyota"};
	
	printf("Model=%d Colour=%s Company=%s",c1.model,c1.color,c1.company);
}