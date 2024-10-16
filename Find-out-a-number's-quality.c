//A programme to Find out that an integer is positive ,negative or zero//
#include<stdio.h>
#include<math.h>
int main()
{ 
int n; 
printf("Enter the value of the integer:");

scanf("%d",&n);
if(n==0){
printf("%d is zero",n);
}
else if(n>0){
printf("%d is a positive integer",n);
}
else{
printf("%d is a negative integer",n);
}

return 0;
}
