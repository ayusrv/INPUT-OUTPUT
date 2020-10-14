
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,total=0;
    for (i=1;i<=n;i++);
    {
        printf("Enter the number of items you want to add");
        scanf("%d",n);
        if (n= 1)
        total=220;
        else if(n= 2)
        total=100;
        else if(n=3)
        total=150;
        total+=total;
    }
    char a;
    printf("SELECT ONE OF THE FOLLOWING \n B=BURGER \n F= FRENCH FRIES \n S= SANDWICH \n I= ICE-CREAM");
    printf("Enter your choice \n");
    scanf("%c",&a);
    switch (a)
    {
    case 'B':
        printf("Your choice aaa is added");
        break;
    case 'F':
        printf("Your choice is added");
        break;
    case 'S':
        printf("Your choice is added");
        break;
    case 'I':
        printf("Your choice is added");
        break;
    default:
        printf("Choose the correct choice");

    }


    return(0);
}
