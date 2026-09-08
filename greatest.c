#include<stdio.h>
int main ()
{
int num1,num2,num3;
printf("Enter three num:");
scanf("%f%f%f",&num1,&num2,&num3);
if(num1>num2&&num1>num3)
{
printf("The greatest num is num1");
}
else if(num2>num1&&num2>num1)
{
printf("The greatest num is num2");
}
else
{
printf("The greatest num is num3");
}
return 0;
}