// A programme to find out a student's grade//
#include<stdio.h>
#include<math.h>
int main()
{
  int n;
printf("Enter the mark:");
scanf("%d",&n);
if(n>=80){
printf("The stduent's qualified grade is A+ with :%d\n",n);
}
else if(n>=70){
printf("The stduent's qualified grade is A with :%d\n",n);
}
else if(n>=60){
printf("The stduent's qualified grade is A- with :%d\n",n);
}
else if(n>=50){
printf("The stduent's qualified grade is B with :%d\n",n);
}
else if(n<50){
printf("The stduent's qualified grade is F with :%d\n",n);
}
return 0;
}


