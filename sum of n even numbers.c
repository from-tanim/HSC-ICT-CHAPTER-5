// Find out the sum of n even numbers //
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int sum;
    for(int i=2;i<=n;i+=2){
        sum=2*i;
    }
    printf("%d",sum);
    return 0;
    
}
