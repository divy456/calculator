#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12
#define YEARS 5

int main()
{
  //initialise rainfall for 2011-2015.
  float rain[YEARS][MONTHS] = 
  {
    {4.0, 5.0, 3.5, 4.5, 6.5, 5.6, 6.2, 5.4, 5.3, 5.5, 4.6, 5.7},
    {5.0, 5.0, 8.5, 4.5, 6.5, 5.6, 6.2, 5.4, 5.3, 5.5, 4.6, 5.7},
    {1.0, 5.0, 3.5, 4.5, 6.5, 5.6, 6.2, 5.4, 5.3, 5.5, 4.6, 5.7},
    {8.0, 5.0, 3.5, 4.5, 6.5, 5.6, 6.2, 5.4, 5.3, 5.5, 4.6, 5.7},
    {9.0, 5.0, 3.5, 4.5, 6.5, 5.6, 6.2, 5.4, 5.3, 5.5, 4.6, 5.7}
  };
  int year, month;
  float subtot, total;

   printf ("YEAR\t\tRAINFALL (inches)\n");
    for (year = 0, total = 0; year <= YEARS; year++)
   {
     for(month = 0, subtot = 0; month < MONTHS; month++)
    {
      subtot += rain[year][month];
    }
    printf("%5d %15.1f\n", 2010 + year, subtot);
    total += subtot;
   }
 printf("\nThe yearly average is %.1f inches.\n\n", total/YEARS);

 printf("MONTHLY AVERAGES:\n\n");
 printf("Jan Feb Mar Apr May June July Aug Sep Oct Nov Dec\n ");
 
 for (month = 0; month < MONTHS; month++)
 {
  for(year = 0, subtot = 0; year < YEARS; year++)
  subtot += rain[year][month];
  printf("%4.1f", subtot/YEARS);
 }
  printf("\n");
  return 0;

}
