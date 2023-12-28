#include<stdio.h>
int main ()
{
    int n,sum,r;
    printf("Enter a number :");
    scanf("%d",&n);

    for(sum=0;n>0;n=n/10)
    {
        r=n%10;
        sum=sum+r;
    }

    printf("Sum of the digits : %d",sum);

    return 0;
}
