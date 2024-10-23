//A programme to create a 1+2+3+...+n sereies//
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        if (i!=n){
            printf("%d+",i);
            
        }
        else{
            printf("%d",i);
        }
        
    }
    
    return 0;
}
