
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a= 1.0/8,b= 1.0/14,c;
    printf("\nA one day work: %.3f",a);
    printf("\nB one day work: %.3f",b);
    c= 1/(a+b);
    printf("\nA and B combined work in total days: %.0f",c);
return(0);
}
