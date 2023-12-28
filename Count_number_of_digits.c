#include<stdio.h>
int main()
{
    int n,total_digits=0;
    printf("Enter a number:");
    scanf("%d",&n);

    while(n!=0)
    {
        n=n/10;
        total_digits++;
    }
    printf("Total digits in the number is %d\n",total_digits);


    return 0;
}
