#include<stdio.h>
int main()
{
int i,n,flag=0;
printf("enter a number positive one ")
scanf("%d",&n);
//a prime number can be divided by 1 and itself we dont check that 
for(i=2;i<n;i++)
{
if(n%i==0)
{
flag=1;
}
}
if(flag==0)
printf("the number is prime");
else
printf("the number is not a prime");
return 0;
}
