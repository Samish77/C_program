#include<stdio.h>
int main()
{
int a =20;
int b=30;
printf("a:%d \nb:%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\n after Swap");
printf("\na:%d \nb:%d",a,b);
return 0;
}