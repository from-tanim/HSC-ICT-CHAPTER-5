//A programme to find out a that is it positive or negative//
#include<stdio.h>
int main()
{
  float n;
printf("Enter the number:");
scanf("%f",&n);
if(n>0){
printf("%.2f is a positive number",n);
}
else{
printf("%.2f is a negative number",n);
}
return 0;
}
