#include<stdio.h>
int main()
{

    float a,r,sum=0;

    printf("1 + 2 + 4 + 8....\n");

    a=1;

    printf("Enter the common ratio of the series: ");
    scanf("%f",&r);

    if(1 > r)
         sum = a/(1-r);
    else
         sum = a/(r-1);

    printf("\nSum of the infinite series: %f",sum);

    return 0;
}
