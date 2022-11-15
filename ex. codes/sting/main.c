#include <stdio.h>

int main()
{
    char s[20];
    char c;
    int  count;
    printf("Enter a string\n");
    fgets(s, sizeof(s), stdin);
    printf("Enter a char\n");
    scanf("%c",&c);
    for( int i=0 ; s[i] !='\0' ; ++i)
      {
        if (c==s[i]){
        ++count;
        }
}
    printf("Total occurrence of '%c' = %d", c, count);
    return 0;
}
