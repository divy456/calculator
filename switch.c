#include <stdio.h>
int main()
{
  enum Weekday {monday, tuesday, wednesday, thursday, friday, saturday, sunday};
  enum Weekday today = wednesday;

  switch(today)
  {
   case sunday:
    printf("today is sunday.");
    break;
    case monday:
    printf("today is monday.");
    break;
    case tuesday:
    printf("today is tuesday.");
    break;
    default:
    printf("whatever.");
    break;
  }
  return 0;
}