#include<stdio.h>
#include<string.h>
 
int main() {
   char str[100], temp,s[100];
   int i, j = 0,k,l=0;
 
   printf("\nEnter the string :");
   gets(str);
 
   i = 0;
   j = strlen(str) - 1;
 
   while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }
 
   printf("\nReverse string is :%s", str);
for(k=0;k<=strlen(str);k++) {  
        if(str[k]=='a'||str[k]=='e'||str[k]=='i'||str[k]=='o'||

str[k]=='u')
                str[k]=' ';
        else 
                s[l++]=str[k];
    } 
    s[l]='\0';
    printf("\nThe string without vowel is->%s",s);
   return (0);
}
