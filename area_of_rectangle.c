// A programme to comput the perimeter and area of a rectangle//
#include<stdio.h>
int main()
{
  int a,b,peri,area;
 
printf("Please enter the value of the length of the rectangle here:");

//reminder//
 scanf("%d",&a);

printf("Please enter the value of the breadth of the rectangle here:");
//reminder//
 scanf("%d",&b);

peri=2*(a+b);
  area=a*b;
  printf("The perimeter of the rectangle is:%d\n",peri);
  printf("The are of the rectangle is:%d\n",area);
return 0;
}
