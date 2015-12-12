#include<stdio.h>
int main()
{
int hour,min,tmin;
printf("enter the time as hh:mm without typing colon");
scanf("%d%d",&hour,&min);
tmin=hour*60;
tmin=tmin+min;
printf("the time in minutes is %d",tmin);
return 0;
}
