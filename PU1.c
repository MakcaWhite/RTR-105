#include <stdio.h>

int main()
{
long int a;
long int b;
printf("Enter first number: ");
scanf("%ld", &a);
printf("Enter second number: ");
scanf("%ld", &b);
printf("%ld * %ld = %ld ", a,b,a*b);

return 0;
}