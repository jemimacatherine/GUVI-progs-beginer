#include <stdio.h>
#include<string.h>
void main()
{
    char str[100],rev;
    int i=0,j;
    printf("enter the string");
    scanf("%s",str);
    j=strlen(str)-1;
    while(i>j)
    {
        rev=str[i];
        str[i]=str[j];
        str[j]=rev;
        i++;
        j--;
    }
    printf("rev is %s",rev);
}
