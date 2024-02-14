#include <stdio.h>
int main()
{
    int a = 12, b = 25;
    printf("\nBITWISE AND VALUE IF a=12 and b=25 = %d", a&b);
    printf("\nBITWISE OR VALUE IF a=12 and b=25 = %d", a|b);
    printf("\nBITWISE XOR VALUE IF a=12 and b=25 = %d", a^b);
    printf("\nBITWISE COMPLEMENT VALUE IF a=12 = %d", ~a);
   
    return 0;
}
