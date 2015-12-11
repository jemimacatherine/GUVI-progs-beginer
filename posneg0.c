#include<stdio.h>
int main()
{
int inum  ;
printf("enter the number")  ;
scanf("%d",&inum);
	if(inum==0)
	
		printf("the enterd number is zero %d",inum);
	
	else
	{
		if(inum>0)
		
			printf("the entered numberis positive %d",inum);
		
		else
		
			printf("the entered number is negative %d",inum);
		
	}
return 0;
}
