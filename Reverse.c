#include<stdio.h>
int main()
{
    int num,t,r,sum=0;
    printf("Input a number:");
    scanf("%d",&num);

    for(t=num;num!=0;num=num/10)
    {
        r=num%10;
        sum=sum*10+r;
    }

    printf("The reverse number is: %d \n",sum);

    return 0;
}
