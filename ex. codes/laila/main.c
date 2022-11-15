#include <stdio.h>
int main()
{
    int n, m,s=0,p=0;
    printf("Enter the student number and subject number:");
    scanf("%d%d", &n,&m);
    int ma[n][m], sum[n], i, j;
    printf("\nEnter the values:");
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf("\nEnter the marks for %d student subject #%d =", i, j);
            scanf("%d", &ma[i][j]);
        }
    }
    for (i=0; i<n; i++)
    {
        int t = 0;
        for (j=0; j<m; j++)
        {
           t+= ma[i][j];
        }
        sum[i] = t;
        printf("%d\n",sum[i]);
    }
//int a,b;
for(i=1;i<=n;i++)
{
    for(j=0;j<n-i;j++)
    {
        if(sum[j]>sum[j+1])
        {
            int temp=sum[j];
            sum[j]=sum[j+1];
            sum[j+1]=temp;
        }
    }
}
    for(i=0;i<n;i++)
    printf("l[%d]=%d\n",i,sum[i]);
for(i=0;i<n;i++)
    {
        if(sum[i]<sum[i+1])
        {
            p+=sum[i+1]-sum[i];
        }
printf("s=%d\n",p);
    }
         printf("sub=%d\n",p);
    return 0;
}
