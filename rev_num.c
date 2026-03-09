#include <stdio.h>

int main()
{
    int num = 234;
    int rev =0,digit =0;

    while(num>0)
    {
        digit = num%10;
        rev = rev *10 +digit;
        num = num/10;
    }
     printf("rev of num %d\n",rev);
   
}