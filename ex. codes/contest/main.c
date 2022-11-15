#include<stdio.h>


int main()
{
    int n,x,m,j,sum=0,tsum;
    int arr[100010] ;
    scanf("%d", &x);
    for(int i=0; i<x; i++) {

        scanf("%d %d", &n,  &m);
         for( int i=0;i<n ; i++) {
              tsum=0;

        scanf("%d", &arr[i]);

               if(arr[i]%m==0) {
                   int y =(arr[i]/m);
                    for(int i=0; i<m; i++) {

                        arr[i]=y;
                     sum+=arr[i];
                    }
                   tsum+=sum;
               }
               else
                {
                    break;
                }
              printf("%d ",arr[i]);
         }
         printf("tsum %d\n",tsum);
    }
    return 0;
}


