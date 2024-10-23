// Find out the sum of n natural number //
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int sum;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
    
}
