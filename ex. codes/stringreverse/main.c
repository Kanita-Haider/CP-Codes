#include <stdio.h>

int main()
{
    char str1 [20] ;
    char str2 [20] ;
char str3 [20] ;
    printf("Enter password\n");
    scanf("%s",str1)   ;
    int  i=0, len=0, j ;
while(str1[i]!='\0')
{   
    i++;
    len++;
  }
for(j=0, i=len-1;  i>=0; i--, j++ )
{
 str2 [j]= str1 [i] ;
   str3[j]= str2 [j]-20;
}
str2[j]='\0';
  
    printf("encrypted : %s \n",str2);
        printf("encrypted password : %s \n",str3);

    return 0;
}
