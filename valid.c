#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter a number between 1 to 9 : ");
scanf("%d",&a);
if(a < 1 || a > 9)
{
printf("Error! Enter a valid Input");
}
getch();
}
