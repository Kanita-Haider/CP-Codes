#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,count=0,prime=0,n=5,x;
    for(i=2;;i++)
    {
        x=pow(2,i)-1;
        count=0;
        for(j=2;j<x;j++)
        {
            if(x%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            printf("%d\n",x);
            prime++;
        }
        if(prime==n)
        {
            break;
        }
    }
}
