#include <stdio.h>
#include <cmath>
int main()
{
    int x,u;
    printf("\n\n List non-prime numbers from 1 to an upperbound:\n");
    scanf("----------------------------------------------------\n");
    printf(" Input the upperlimit: ");
    scanf("%d",&u);
    printf(" The non-prime numbers are: ");
    for (int num = 2; num <= u; ++num) 
    {
        int mfactor = (int)sqrt(num);
        for (int fact = 2; fact <= mfactor; ++fact) 
        {
            if (num % fact == 0) 
            {
                printf("%d",&num);
                break;
            }
        }
    }
    return 0;
}
