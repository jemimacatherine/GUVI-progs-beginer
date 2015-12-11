#include<stdio.h>
int main()
{
char c;
printf("enter a character");
scanf("%c",&c);
	if(c=="a"||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	{
		printf("the char is vowel");
	}
	else
	{
		printf("the char is consonant");
	}
return 0;
}
