#include<stdio.h>
int main()
{
    int a,b,substraction;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);

    substraction=a+~b+1;

    printf("Substraction of two integers: %d",substraction);

    return 0;
}
