#include <stdio.h>
int main()
{
  int n, reverse=0, rem,temp;
  printf("Enter an integer: ");
  scanf("%d", &n);
  temp=n;
  while(temp!=0)
  {
  rem=temp%10;
  reverse=reverse*10+rem;
  temp/=10;
  }
  printf("the reverse is %d",reverse);
  return 0;
}
