#include<stdio.h>
#include<string.h>
  #include<stdlib.h>
//int string_length(char*);
char* reverse(char*);
 
main() 
{
   char string[100];
 
   printf("Enter a string\n");
   gets(string);
 
   reverse(string);
 
   printf("Reverse of entered string is \"%s\".\n", string);
 
   return 0;
}
 
char* reverse(char *string) 
{
   int length, c;
   char *begin, *end, temp;
 
   length = strlen(string);
 
   begin = string;
   end = string;
 
   for ( c = 0 ; c < ( length - 1 ) ; c++ )
      end++;
 
   for ( c = 0 ; c < length/2 ; c++ ) 
   {        
      temp = *end;
      *end = *begin;
      *begin = temp;
 
      begin++;
      end--;
   }

}
 
/*int string_length(char *pointer)
{
   int c = 0;
 
   while( *(pointer+c) != '\0' )
      c++;
 
   return c;
}*/
