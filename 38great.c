#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the 3no");
scanf("%d\t%d\t%d\t",&a,&b,&c);
if((a>b)&&(a>c))
printf("a is great");
else if((b>a)&&(b>c))
{
printf("b is great");
}
else
printf("c is great");
return 0;
}
