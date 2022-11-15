  /*part 1 red(r)        part 2 > pink(p)      part 3 > a
  part 1 black(b)        part 2 > white(w)      part 3 > c
  part 1 green(g)        part 2 > yellow(y)      part 3 > d
  */
  #include <stdio.h>
 int main()
{       
    char   color (char)  ; //prototype return_type funcion name (passing_parameteronly datatype);
 char color3(char,char);
    char icolor, scolor, thcolor;
    //INPUT
    printf("Enter 1st color of the dress: ");
    scanf("%c", &icolor);
    
    //function call
    scolor=color (icolor);
    printf("the 2nd color of the dress is : %c",scolor);
    thcolor=color3(icolor,scolor);
    printf("The 3rd color of the dress is: %c ", thcolor);
    return 0;
}
    /*****************/
    /* function define for color 3*/
    /****************/
         char color3(char ch1, char ch2)
         {
         if(ch1=='r' && ch2=='p')
            return ('a');
         else if (ch1=='b' && ch2=='w')
            return('c');
         else
            return('d');
         }
    
