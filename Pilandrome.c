#include<stdio.h>
int main()
{
    int n,sum,t;
    printf("Enter the value of n:");
    scanf("%d",&n);

    t=n;
    for(sum=0;n>0;n=n/10)
    {

        sum=sum*10;
        sum=sum+(n%10);
    }
    if(sum==t)
    {
        printf("%d is a pilandrome number \n",n);

    }
    else
    {
        printf("%d is not a pilandrome number \n",n);
    }

    return 0;
}
