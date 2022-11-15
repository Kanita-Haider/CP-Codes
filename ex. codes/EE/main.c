#include <stdio.h>
      int i;
   char s[1000],c;
  int string(char* s,char c);
int main()
{

     gets(s);
scanf("%c",&c);
       string(s,c);
       printf("%d",string(s,c))  ;
    return 0;
}
 int string(char* s,char c){
for( i=0;s[i];i++)  {

  if(s[i]==c){
          return  string(s[i+1],c);
  } 
else
}
      return i ;

}
