
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n,result;
    printf("Enter the mth position of Sonu from the top ");
    scanf("%d",&m);
    printf("\nPosition of Sonu from the top %d",m);
    printf("\n\nEnter the nth position of sonu form the bottom ");
    scanf("%d",&n);
    printf("\nPosition of Sonu from the bottom: %d",n);
    result= m+n-1;
    printf("\n\nTotal number of the students in class %d",result);
return(0);
}
