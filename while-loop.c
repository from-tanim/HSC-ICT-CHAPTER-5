// Test While loop //
#include <stdio.h>
#include<math.h>

int main() {
 int t;
 printf("Enter the value of t: ");
 scanf("%d", &t);
 int i=1;
 while(i<=t) {
     printf("%d Hello world\n",i);
     i++;
 }
 return 0;
}
