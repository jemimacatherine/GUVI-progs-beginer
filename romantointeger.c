#include <stdio.h>
#include <string.h>
 
int digit(char);
 
int main()
{
    char romanval[1000];
    int i = 0;
    long int number = 0;
 
    printf("Enter roman num (Valid digits are I, V, X, L, C, D, M):\n");
    scanf("%s", romanval);
    while (romanval[i])
    {
        if (digit(romanval[i])  2)
        {
            if (digit(romanval[i]) = digit(romanval[i+1]))
            number = number + digit(romanval[i]);
        else
        {
            number = number + (digit(romanval[i + 1]) -
            digit(romanval[i]));
            i++;
        }
        i++;
    }
    printf("Its decimal value is : %ld", number);
    return 0;
}
 
int digit(char c)
{
    int value = 0;
    switch (c)
    {
    case 'I':
        value = 1;
        break;
    case 'V':
        value = 5;
        break;
    case 'X':
        value = 10;
        break;
    case 'L':
        value = 50;
        break;
    case 'C':
        value = 100;
        break;
    case 'D':
        value = 500;
        break;
    case 'M':
        value = 1000;
        break;
    case '0':
        value = 0;
        break;
    default:
        value = -1;
    }
    return value;
}
