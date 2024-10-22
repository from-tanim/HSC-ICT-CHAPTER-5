//A programme to findout the greatest number from 3 integer//
#include<stdio.h>
#include<math.h>
int main()
{
  //declaretion of variables//
    int a,b,c;
    printf("Enter The first Integer:");
  //Taking input//
    scanf("%d",&a);
    printf("Enter the second integer:");
    scanf("%d", &b);
    printf("Enter the third integer:");
    scanf("%d", &c);
  //Applying The condition
if(a>b && a>c){
    printf("The first integer %d is the gratest among The three of them",a);
}
else if(b>a && b>c){
    printf("The second integer %d is the gratest among The three of them",b);
}
else if(a==b && b==c){
    printf("The three integers are equal");
    
}
else{
    printf("The third integer %d is the gratest among The three of them",c);
}
return 0;
}
