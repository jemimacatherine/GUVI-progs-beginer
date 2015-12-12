#include<stdio.h>
int main()
{
int century;
printf("enter an century or year");
scanf("%d",&century);
if(century%400==0)
printf("its a leap year");
else
printf("its not a leap year");
return 0;
}
