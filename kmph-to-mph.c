//A programme to convert velocity of kmph to mps//
#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter the velocity of kmph:",a);
    scanf("%f",&a);
    b= a/3.6;
    printf("The velocity in mps is:%.2f",b);
    return 0;
}
