#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the range lower and upper");
scanf("%d%d",&a,&b);
printf("Enter a number between upper to lower range : ");
scanf("%d",&c);
if(c < a || c > b)
{
printf("Error! Enter a valid Input");
}
else
printf("you entered corectly");
getch();
}
