#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
      if ((a>0 && b>0) && (c>0 && d>0))
            printf("Yes");
     else if ((a<0 && b>0) && (c<0 && d>0))
            printf("Yes");
    else if ((a>0 && b<0) && (c>0 && d<0))
            printf("Yes");
     else if ((a<0 && b<0) && (c<0 && d<0))
            printf("Yes");
      else
          printf("No");
    return 0;
}
