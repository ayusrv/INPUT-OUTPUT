
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int dist;
    printf("Enter the distance travelled in kilometers ");
    scanf("%d",&dist);
    float time,speed;
    printf("\nEnter the min lost by the train while stopping at stations ");
    scanf("\n%f",&time);
    speed= (float)(60*dist)/(3*time);
    printf("Speed of the car is = %f",speed);
return(0);
}
