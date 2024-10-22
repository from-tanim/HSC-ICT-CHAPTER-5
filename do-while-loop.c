// Test While loop //
#include <stdio.h>
#include<math.h>

int main() {
 int t;
 printf("Enter the value of t: ");
 scanf("%d", &t);
 int i=1;
do {
    printf("%d Tanim's opt\n",i);
    i++;
    
}
while(i<=t);
return 0;
}
