#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    double p1,p2;

    printf("Enter the value of a,b,c where a*x*x+b*x+c=0\n");
    scanf("%d %d %d",&a,&b,&c);

    d=b*b-4*a*c;

    if(d<0)
    {
        printf("p1=%0.2lf+i%0.2lf\n",(-b)/(2*a),sqrt(d)/(2*a));
        printf("p2=%0.2lf-i%0.2lf\n",(-b)/(2*a),sqrt(d)/(2*a));
    }
    else
    {
     p1=(-b+sqrt(d))/(2*a);
     p2=(-b-sqrt(d))/(2*a);

     printf("The first root is %0.2lf",p1);
     printf("The second root is %0.2lf",p2);

     return 0;

    }
}
