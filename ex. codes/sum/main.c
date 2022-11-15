#include <stdio.h>
int main()
{
    int n, m,sub;
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
return 0;
}
