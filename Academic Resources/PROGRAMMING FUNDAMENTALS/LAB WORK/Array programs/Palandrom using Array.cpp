#include <string.h>
#include<stdio.h> 
 
int main()
{
     char s1[1000],s2[1000];  
   
    printf("Enter  the string: ");
    gets(s1);
    strcpy(s2,s1);
    strrev(s2);
    if(!strcmp(s1,s2))
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");
    
    
    return 0;
    
    
}