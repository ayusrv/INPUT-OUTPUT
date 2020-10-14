#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the  number ");
    scanf("%d",&n);
    if (n>999999)
        printf("NOT POSSIBLE!");
    else
    for(i=999999;;i--)
        if(i%n==0)
    {
        printf("THE LARGEST SIX DIGIT NUMBER WHICH IS DIVISIBLE BY %d IS %d\n",n,i);
        printf("THE SHORTEST SEVEN DIGIT NUMBER WHICH IS DIVISBLE BY %d IS %d",n,i+n);
        break;
    }
    return(0);
}
