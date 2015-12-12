#include<stdio.h>
int main()
{
int start,end,rem,num,temp,arm=0,i;
printf("enter the starting and ending interval");
scanf("%d%d",&start,&end);
for(i=start;i<=end;i++)
{
i=num;

temp=num;
while(num!=0)
{
rem=num%10;
rem=rem*rem*rem;
num=num/10;
arm=arm+rem;
}

if(temp==arm)
printf("\n%d",temp);

}
printf("the above are the armstrong numbers present in between %d and %d",start,end);
return 0;
}
