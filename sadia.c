#include<stdio.h>
#include<string.h>

int main(){
    char s[20], c;
    int flag=0;
    printf("S = ");
   scanf("%s", s);
   printf("\n");
   printf("C = ");
    scanf("%c", &c);
    printf("\n");
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==c) flag=1;
        if(flag==1){
            s[i]=s[i+1];
        }
    }
    printf("S = %s" ,s);
    return 0;
}