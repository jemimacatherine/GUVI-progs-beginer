#include<stdio.h>
#include<conio.h>
void main()
{
    char a[50],b[50];
    int i,j,n,k;
    clrscr();
    printf("\n Please Give The STRING OF A : ");
    scanf("%s",a);
    printf("\n Please Give The STRING OF B : ");
    scanf("%s",b);
    for(i=0,k=0;a[i]!='\0';i++)
        k++;
    for(j=0,n=0;b[j]!='\0';j++)
        n++;
    printf("VALUE OF K=%d",k);
    printf("VALUE OF N=%d",n);
    for(i=k,j=0;i<=n+k;i++,j++)
            a[i]=b[j];

    printf("\n THE Concatenated string is %s .",a);
    getch();
}
