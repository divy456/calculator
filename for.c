#include <stdio.h>

int i,j;
int main() {
   for (i=1,j=2;i<=5; ++i,j=j+2)
    printf("%d\n", i*j);

    return 0;
}