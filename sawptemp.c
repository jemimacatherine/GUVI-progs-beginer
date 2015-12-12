#include
int main(){
int a, b, temp;
printf("En ter the value of a and b: \n");
scanf("%d %d",&a,&b);
printf("Be fore swapping a=%d, b=%d \n", a, b);
/*Swapping logic */
temp = a;
a = b;
b = temp;
printf("Af ter swapping a=%d, b=%d", a, b);
return 0;
}
