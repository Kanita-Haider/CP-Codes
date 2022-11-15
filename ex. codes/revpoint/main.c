#include<stdio.h>
char *reverse(char *input)
{
    int i;                    
    int len=strlen(input);
    char output[100];
    for(int i = 0; i <= len; i++)
{
output[len-i-1]=input[i];
}
output[len-i]='\0';
printf("%s\n",output);
}
int main()
{
    char string[ ]= "Kanita";
    *reverse(string);
}
