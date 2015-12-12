#include<stdio.h>
int main()
{
int i,b,p,tb;
printf("enter the base");
scanf("%d",&b);
tb=b;
printf("enter the power for the base");
scanf("%d",&p);
if(tb==0)
printf("the power of base zero will be always zero");
else if(p==0)
{
printf("when power is zero the value is always one");
}
else if(p==1)
{
printf("when the power is one thn the value is %d",tb);
}
else
{
tb=b;
for(i=2;i<=p;i++)
{
b=b*tb;
}
printf(" when the power is %d for the base %d then the value is%d",p,tb,b);
}
return 0;
}
