#include<stdio.h>
int main()
{
int i=1,sum=0,n;
printf("the natural no count till howmany consecutive numbers");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("the sum of natural numbers is %d",sum);
return 0;
}
