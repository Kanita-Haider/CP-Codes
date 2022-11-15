#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,x1,x2;
    printf("enter the values of a,b,c:");
    scanf("%f,%f,%f",&a,&b,&c);
    d=(b*b-4*a*c);
    if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("x1=%f", x1);
        printf("x2=%f", x2);
    }
    else if(d==0)
    {
        x1=x2=(-b/(2*a));
        printf("x1=%f and x2=%f", x1,x2);
    }
    else if(d<0 || a==0)
    {
        printf("this is imaginary number");
    }
    else
    {
        printf("invalid number");
    }
    return 0;
}
