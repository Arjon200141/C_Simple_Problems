#include<stdio.h>
int main() {
	int n,i,sum=0;
	printf("Enter the max value of series: ");
	scanf("%d",&n);

	sum=(n*(n+1)*(2*n+1))/6;
	printf("Sum of the series : ");
	for(i =1;i<=n;i++)
    {
		if (i!= n)
        printf("%d^2 + ",i);
        else
        printf("%d^2 = %d ",i,sum);
	}
	return 0;
}
