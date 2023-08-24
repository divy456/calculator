#include <stdio.h>
#include <stdlib.h>
int main()
{
  enum Company{ GOOGLE, FACEBOOK, XEROX=22, YAHOO, EBAY, MICROSOFT};
  enum Company xerox = XEROX;
  enum Company google = GOOGLE;
  enum Company ebay = EBAY;
  printf("the value of xerox is : %d\n", xerox);
  printf("the value of google is : %d\n", google);
  printf("the value of ebay is ; %d\n", ebay); 
  return 0;
}