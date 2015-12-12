#include<stdio.h>
int main()
{
int rem,num,temp,arm=0;
printf("enter the number");
scanf("%d",&num);
temp=num;
while(num!=0)
{
rem=num%10;
rem=rem*rem*rem;
num=num/10;
arm=arm+rem;
}
if(temp==arm)
printf("\n%d is a armstrong number",temp);
else
printf("\n%d is not a armstrong number",temp);
return 0;
}
