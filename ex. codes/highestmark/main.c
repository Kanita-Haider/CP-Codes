#include<stdio.h>
int main()
{
    int n,m,highest,lowest ;
    printf("Enter the number of students :  \n");
    scanf("%d",&n);
    printf("Enter the number of exams :  \n");
    scanf("%d",&m);
    int i,j,num[n][m],sum[n];
    for(i=0;i<n;i++)
    {
    for(j=0;j<m;j++)
       {
        printf("Enter the number of  exam %d of student %d:  \n",j,i) ;
        scanf("%d",&num[i][j]);
        }
    }

    for (i=0; i<n; i++) 
    {
        int t = 0;
        for (j=0; j<m; j++) 
        {
           t+= num[i][j];
        }
        sum[i] = t;
         printf("\n sum %d",sum[i]);
    }
    highest=lowest=sum[0];
    for(i=0;i<n;i++)
      {
         if(sum[i]>highest)
              highest=sum[i];
         if(sum[i]<lowest)
              lowest=sum[i];
     }
     printf(" \n highest %d",highest) ;
     printf("\n lowest %d",lowest);
       printf("\n substraction %d",highest-lowest);
 return 0;
}
