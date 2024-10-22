//A programme to findout the largest number from 3 integer//
#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c;
  
  printf("Enter the 1st number:");
  scanf("%d",&a);
 
  printf("Enter the 2nd number:");
  scanf("%d",&b);
 
  printf("Enter the 3rd number:");
  scanf("%d",&c);
  
  
if(a>b && a>c){
  printf("%d is the largest number among the three numbers",a);
}
else if(b>a && b>c){
  printf("%d is the largest number among the three numbers",b);
}
else{
  printf("%d is the largest number among the three numbers",c);
}
return 0;
}
