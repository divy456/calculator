#include <stdio.h>
int main()
{
    int num, rem;
 
    printf("enter an number to be tesetd : ");
    scanf("%d", &num);
    rem = num % 2;
    if (rem == 0)
        printf("number is  even integer\n", num);
    else
        printf("number is an odd integer\n", num);
}