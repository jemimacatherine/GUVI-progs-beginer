#include<stdio.h>
#include<stdlib.h>
int main()
{
int i;
char num[123];
printf("enter the number ");
gets(num);
i=atoi(num);
printf("the number in after conversion from string to int is %d",i);
return 0;
}
