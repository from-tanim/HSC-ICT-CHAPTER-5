//A PROGRAMME TO CONVERT DAYS INTO YEAR,WEEK,HOUR & MINUTES ALSO SECONDS//
#include<stdio.h>
int main()
{
  int numberofdays,totalhours,totalminutes,totalseconds;
float totalyears,totalweeks;
printf("Enter the number of days:");
scanf("%d", &numberofdays);
//total years//
totalyears= numberofdays/365;
printf("The number of years:%f\n",totalyears);
//total weeks//
totalweeks= numberofdays/7;
printf("The number of weeks:%f\n",totalweeks);
//total hours//
totalhours= numberofdays*24;
printf("The number of total hours:%d\n",totalhours);
//total minutes//
totalminutes= numberofdays*24*60;
printf("The number of total minutes:%d\n", totalminutes);
//total seconds//
totalseconds= numberofdays*24*60*60;
printf("The number of seconds:%d\n", totalseconds);

return 0;
}
