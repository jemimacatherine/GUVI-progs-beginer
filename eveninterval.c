#include<stdio.h>
int main()
{
int start,end,i;
printf("enter the starting and ending numbers between to find the evn series");
scanf("%d%d",&start,&end);
for(i=start;i<=end;i++)
{
if(i%2==0)
printf("\n %d",i);
}
printf("the above is the even series");
return 0;
}
