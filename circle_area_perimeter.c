// A Programme to find out the area and perimeter of a circle//
#include<stdio.h>
#define PI 22/7
int main()
{
  float area,perimeter,rad;
printf("Enter the Radius of the circle:");
scanf("%f", &rad);
area=PI*rad*rad;
perimeter=2*PI*rad;
printf("The area of the circle is:%.2f\n",area);
printf("The perimeter of the circle is:%.2f\n",perimeter);

return 0;
}

