//A programme to find out a Year is a leap year or not//
#include<stdio.h>
#include<math.h>
int main()
{
  int a;
printf("Enter the year:");
scanf("%d",&a);
if((a % 4 == 0 && a % 100 !=0) || (a % 400 == 0)){
printf("%d is a leap year",a);
}
else{
printf("%d is not a leap year",a);
}
return 0;
}
