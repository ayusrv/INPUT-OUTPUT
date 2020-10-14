#include<stdio.h>
int main()
{
    int n,p,i;
    float profitper,lossper,profit=0,loss=0,total,item[n];
    printf("Enter the number of items for sale ");
    scanf("%d",&n);
    printf("\n\n\t\t-_-_-_ENTER THE RATE OF EACH ITEMS_-_-_-\n\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d : ",i+1);
        scanf("%f",&item[i]);
    }
    printf("Enter the number of items sold in profit ");
    scanf("%d",&p);
    printf("Enter the percentage of profit ");
    scanf("%f",&profitper);
    printf("Enter the percentage of loss ");
    scanf("%f",&lossper);
    for (i=0;i<p;i++)
    {
        profit+=(profitper*item[i])/100;
    }
    for (i=p;i<n;i++)
    {
        loss+=(lossper*item[i])/100;
    }
    total= profit-loss;
    printf("Total %.2f",total);
    if(total>0)
        printf("Profit by the company is RS %.2f",total);
    else if(total=0)
        printf("Company didn't get any profit or loss ");
    else
        printf("Loss by the company is RS %.2f ",total*(-1));
    return(0);
}
