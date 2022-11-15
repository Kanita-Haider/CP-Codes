#include <stdio.h>

int main()
{
    int  i,n,m=0;
    int  arr[100] ;
    printf("Enter the number : \n");
    scanf("%d",&n);
for(i=1;i<=n;i++)
{
    arr[m]=fab(m);
    printf("%d\t",arr[m]);
    m++;
}
    }

int fab(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fab(n-1)+fab(n-2);
}
