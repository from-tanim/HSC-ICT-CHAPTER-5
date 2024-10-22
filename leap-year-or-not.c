//A programme to find out a Year is a leap year or not//
#include<stdio.h>
#include<math.h>
int main()
{
    int y;
    printf("Enter the year:");
    scanf("%d",&y);
    
    if(y%400==0){
        printf("%d is a leap year",y);
    }
    else if(y%100!=0 && y%4==0){
        printf("%d is a leap year",y);
    }
    else {
        printf("%d is not a leap year",y);
    }
    return 0;
}
