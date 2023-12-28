#include<stdio.h>
int main()
{
	int n;
	float i,sum=0,t;
	printf("1+1/2+1/3+....+1/n\n");
	printf("Enter the value of n\n");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
    {
		t=1/i;
		sum=sum+t;
	}
	printf("The sum of given H.P. is %f",sum);
	return 0;
}
