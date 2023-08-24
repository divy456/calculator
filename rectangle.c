#include<stdio.h>  
int main()  
{   // initialize the local variables.  
    float l, b, ar, pr;  
    printf("Enter the length of the rectangle");  
    scanf("%f", &l); // take input from the user  
    printf("Enter the breadth of the rectangle");  
    scanf("%f", &b);   
    ar = l * b; // calculate the area of rectangle.  
    pr = 2 * (l + b); // calculate the perimeter of rectangle.  
    printf("\n Area of Rectangle is: %f", ar);  
    printf("\n Perimeter of Rectangle is: %f", pr);  
}  

