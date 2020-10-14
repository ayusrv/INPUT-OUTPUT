#include<stdio.h>
int main()
{
    int n,boys,girls,boysperc,girlsperc,a,b,difference;
    printf("Enter the total strength of the class\n ");
    scanf("%d", &n);
    printf("Enter the ratio of boys and girls\n ");
    scanf("%d %d",&a,&b);
    boys=n*a/(a+b);
    girls=n-boys;
    boysperc=(boys*100/n);
    girlsperc=(girls*100/n);
    difference=boys-girls;
    printf("Total number of boys are %d",boys);
    printf("\nTotal number of girls are %d",girls);
    printf("\ndifference between girls and boys are %d",difference);
    printf("\nBoys percentage= %d",boysperc);
    printf("\nGirls percentage= %d",girlsperc);
    if(boysperc>70)
        printf("\nThere is gender partiality in boys as boys percentage is %d",boysperc);
    else if(girlsperc>=70)
        printf("\nThere is gender partiality in girls as girls percentage is %d",girlsperc);
    else if(difference>=-5 && difference<=5)
        printf("\nEqual opportunities for both boys and girls ");
    else
        printf("\nthere is no conclusion drawn from the given stats");
    return(0);

}
