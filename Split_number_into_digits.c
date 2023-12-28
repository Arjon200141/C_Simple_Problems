#include<stdio.h>
int main()
{
    int num,mod;
    printf("Enter a number:");
    scanf("%d",&num);

    while(num > 0)
    {
        mod = num % 10;
        printf("%d\n",mod);

        num = num / 10;
    }

    return 0;
}
