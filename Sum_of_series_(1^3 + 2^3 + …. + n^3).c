#include <stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the max value of series: ");
    scanf("%d",&n);

    sum=pow(((n*(n+1))/2),2);
    printf("Sum of the series: ");

    for(i=1;i<=n;i++)
    {
        if(i!=n)
        printf("%d^3 + ",i);
        else
        printf("%d^3 = %d",i,sum);
    }
    return 0;
}
