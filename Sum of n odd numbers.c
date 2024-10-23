// Find out the sum of n even numbers //
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i+=1){
        sum=i*i;
    }
    printf("%d",sum);
    return 0;
    
}
