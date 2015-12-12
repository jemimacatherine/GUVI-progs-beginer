#include<stdio.h>
int main()
{
int start,end,i,flag=0,x;
printf("enter the starting and ending interval");
scanf("%d%d",&start,&end);
for(i=start;i<=end;i++)
{
  for(x=2;x<i;x++)
{
if(i%x==0)
{
flag=1;
}
}
if(flag==0)
printf("%d",&i);
}

printf("the above is the prime number series");
return 0;
}
