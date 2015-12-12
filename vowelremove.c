#include<stdio.h>
int main(){
    char str[20],s[20];
    int i,j=0;
    printf("Enter any string->");
    scanf("%s",str);
    printf("The string is->%s",str);
   for(i=0;i<=strlen(str);i++) {  
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
                str[i]=' ';
        else 
                s[j++]=str[i];
    } 
    s[j]='\0';
    printf("\nThe string without vowel is->%s",s);
    return 0;
}
