#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter total number of students in the train\n");
    scanf("%d",&n);
    printf("Enter the total of students pull the chain\n");
    scanf("%d",&m);
    float percentage;
    percentage = ((float)m/n)*100;
    if (m>n)
    printf("number of students who pulled can not be greater than students present in the train\n");
    else
    {
    if(percentage >= 80)
        printf("Strict Action Required\n");
        else if(percentage>=50 && percentage<=80)
        printf("Guidlines to be issued\n");
        else if(percentage>=10 && percentage<50)
        printf("Restrict the action\n");
        else if(percentage<10)
        printf("No action Required\n");
    }
    return(0);
}

