#include <stdio.h>
int main()
{
    unsigned long long sum = 0LL;
    unsigned int count = 0;
     printf("\nEnter the number of integrs u want to sum: ");
     scanf("%u", &count);
     
     unsigned int i;
     for( i = 1; i<=count ; i++)
     {
         printf ("inside loop");
     sum += i;
     }
     printf("\nTotal 0f the first %u numbers is %u\n", count, sum );
     return 0;
}