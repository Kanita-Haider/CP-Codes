#include <stdio.h>
int main()
{
    char  id[6]={2,0,1,2,1,6};
    int x,y,z;
    printf("ouput\n");

for (int x = 0,  y=0; x <6,y <6; ++x,++y)
  {   
    printf("i = %d, id [%d] = %d\n", x, x, id[y]);
  }  
   return 0;
}
