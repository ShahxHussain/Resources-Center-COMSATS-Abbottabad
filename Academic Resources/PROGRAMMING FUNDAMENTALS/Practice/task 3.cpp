#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	
	printf("Enter Any Alphabet");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case'a':
		printf("Vowel");
		break;
		
	    case'e':
		printf("Vowel");
		break;
		
		case'i':
		printf("Vowel");
		break;
		
		case'o':
		printf("Vowel");
		break;
		
		case'u':
		printf("Vowel");
		break;
	
	    default:
	    printf("Consonants");
		
	}
}