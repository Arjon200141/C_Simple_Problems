#include<stdio.h>
int main()
{
    int i,number,expotent;
    long power=1;

    printf("Enter a number:");
    scanf("%d",&number);
    printf("\nEnter the expotent:");
    scanf("%d",&expotent);

    for(i=1;i<=expotent;i++)
    {
        power=power*number;
    }

    printf("The result of %d power %d is %d",number,expotent,power);

    return 0;
}
