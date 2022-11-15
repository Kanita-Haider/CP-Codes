#include<stdio.h>
int main()
{
    int x[5]={1,2,3,3,4},
    temp[5]={0},temp1[5]={0},i,n=1;
    for(i=0;i<5;i++)
    {
        if(x[i]==x[i+1])
        {
            n++;
            temp[i]=n;
        }
        else
        {
           n=1;
       }
    }
    for(i=0;i<5;i++)
    {
        printf("\n mode value is : %d",temp[i]);
        temp1[i]=temp[i];
    }
    for(i=0;i<4;i++)
    {
        if(temp[i]>temp[i+1])
        {
            int y;
            y=temp[i];
            temp[i]=temp[i+1];
            temp[i+1]=y;
        }
    }
    printf("\n the largest num is %d",temp[4]);
    for(i=0;i<4;i++)
    {
        if(temp1[i]==temp[4])
        n=i;
    }
    printf("\n the largest value index is %d",n);
    if(temp1[n]>0)
    {
        printf("\n the mode is : %d",x[n]);
    }
    else
    {
        printf("\n no mode;");
    }
    return 0;
}
