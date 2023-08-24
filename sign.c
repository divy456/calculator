#include <stdio.h>
int main(void)
{
  int num , sign;
  printf("please enter a number:");
  scanf("%i\n", &num);

  if(num<0)
  sign = -1;
  else if (num ==0)
  sign = 0;
  else //must be positive;
  sign = 1;
  printf("Sign = %i\n", &sign);
  return 0;
}
