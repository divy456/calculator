#include <stdio.h>
#include <stdlib.h>
 
int main()
{
  int minutesentered;
  double  minutesinyear;
  double years; 
  double days;
  printf("please enter no of minutes: ");
  scanf("%d", &minutesentered);
  minutesinyear = 60*24*365 ; //no of minutes in a year.
  years = (minutesentered / minutesinyear);
  days = (minutesentered /60.0 ) / 24;
  printf("%d minutes is approximately %fyears and %fdays\n", minutesentered, years, days);
  return 0;
}