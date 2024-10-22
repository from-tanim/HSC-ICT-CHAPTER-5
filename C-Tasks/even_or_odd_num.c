//A programme to find out a number that is it a even number or a odd number//
#include<stdio.h>
#include<math.h>
int main()
{
  int rem;
printf("Enter the number:");
scanf("%d",&rem);

if (rem % 2 == 0) {
printf("%d is a even number.\n",rem);
}
else{
  printf("%d is a odd number.\n",rem);
}
return 0;
}
