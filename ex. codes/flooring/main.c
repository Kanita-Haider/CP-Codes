#include<stdio.h>
int floor(float f)
{
    if(f>=0.0)
    return f;
    else
    return(f-1);
    
}
int ceil(float f)
{
    if(f>=0.0)
    return ((f)+1);
    else
    return f;
}
int main()
{
    float f;
    printf("Enter the number::");
    scanf("%f",&f);
    printf("Ceil::%d\n",ceil(f));
    printf("Floor::%d\n",floor(f));
    
}
