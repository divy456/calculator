#include <stdio.h>
#include <stdlib.h>

#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTIME_40
int main()
{
  int hours = 0;
  double grosspay = 0.0;
  double taxes = 0.0;
  double netpay = 0.0;
  printf("please enter the number of hours worked for this week:");
  //enter an input.
  scanf("%d\n", &hours);
  //calculate the number of working hours.
  if (hours <= 40)
  grosspay = hours * PAYRATE;
  else
  {
    grosspay = 40 * PAYRATE;
    double overTimePay = (hours - 40) * (PAYRATE) * 1.5;
  grosspay += overTimePay; 
  }
  //calculate the taxes
  if (grosspay <= 300)
   {
    taxes = grosspay * TAXRATE_300 ; 
   }

  else if( grosspay > 300 && grosspay <= 450)
  {
    taxes = 300 * TAXRATE_300;
    taxes += (grosspay - 300) * TAXRATE_150;
  }
  else if (grosspay > 450)
 { taxes = 300 * TAXRATE_300;
   taxes =+ 150 * TAXRATE_150;
   taxes += (grosspay - 450) * TAXRATE_REST;
 }
  //calculate the netpay
  netpay = grosspay - taxes;
 
  //display output
  printf("your gross pay this week is: %.2f\n", grosspay);
  printf("your taxes this week is : %.2f\n", taxes);
  printf("your netpay this week is : %.2f\n", netpay);

  return 0;
} 