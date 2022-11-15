#include <stdio.h>
#include <stdlib.h>
int* sort(int* );
int main()
{
     int* p;
     int x[ ]={9,8,7,5,6,2,4,3} ,i ;
     p=&x[0];
  
     int* y= sort(p);
    for(i=0;i<8; i++){
    printf("%d \t" , *(y+i));
}
    return 0;
}  
 int* sort(int * p ){
int i,j; 
     for(i=1;i<=8; i++){
        for(j=0; j<8-i; j++){
              if( *(p+j)> *(p+j+1)){
                 int temp = *(p+j);
                 *(p+j)= *(p+j+1);
                 *(p+j+1)= temp;
             }
        }
     }
return p ;            
}    
