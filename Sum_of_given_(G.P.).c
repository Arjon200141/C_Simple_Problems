#include<stdio.h>
#include<math.h>
int main() {
	float a,r,tn,sum=0;
	int n;
	printf("Enter first number of the G.P. series: ");
	scanf("%f",&a);
	printf("Enter total numbers in the G.P. series: ");
	scanf("%d",&n);
	printf("Enter common ratio of G.P. series: ");
	scanf("%f",&r);

	sum = (a*(1 - pow(r,n+1)))/(1-r);
	tn = a * (1 -pow(r,n-1));

	printf("tn term of G.P.: %f",tn);
	printf("\nSum of the G.P.: %f",sum);
	return 0;
}
