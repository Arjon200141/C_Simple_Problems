#include<stdio.h>
#include<math.h>
int main()
{
	int a,d,n,i,tn,sum=0;
	printf("Enter first number of the A.P. series: ");
	scanf("%d",&a);
	printf("Enter total numbers in the A.P. series: ");
	scanf("%d",&n);
	printf("Enter the common difference of A.P. series: ");
	scanf("%d",&d);
	sum=(n*(2*a+(n-1)*d))/2;
	tn=a+(n-1)*d;
	printf("Sum of the series A.P.: ");
	for (i=a;i<=tn;i=i+d)
    {
		if(i!=tn)
        printf("%d + ",i);
        else
        printf("%d = %d ",i,sum);
	}
	return 0;
}
