//A PROGRAMME TO CONVERT TEMPARETURE FROM FAHRENHITE TO CELSIUS//

#include<stdio.h>
int main()
{
  float fahrenhite,celsius;
printf("Enter the fahrenhite tempareture:");
scanf("%f", &fahrenhite);
celsius= (5*fahrenhite-160)/9;
printf("The tempareture in celsius scale is:%.2f",celsius);

return 0;
}
