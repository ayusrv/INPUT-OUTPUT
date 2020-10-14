#include<stdio.h>
int main()
{
    int x,y,z,p,q,r,g,h,i,n;
    printf("Enter money ratio:x,y,z\n");
    scanf("%d%d%d",&x,&y,&z);
    printf("Enter spending money ratio:p,q,r\n");
    scanf("%d%d%d",&p,&q,&r);
    printf("Enter saving money ratio:g,h,i\n");
    scanf("%d%d%d",&g,&h,&i);
    printf("Enter total money\n");
    scanf("%d",&n);
    int r1;
    r1=n/(x+y+z);
    int n1,n2,n3;
    n1=r1*x;
    n2=r1*y;
    n3=r1*z;
        float x1,x2;
    if((p*h)-(g*q) == 0)
        printf("\nWe can't find value of x1 and x2 \n");
    else
        {
            x1 = (float)((n1 * h) - (g * n2)) / ((p * h) - (q * g));
            x2 = (float)((n2 * p) - (n1 * q)) / ((p * h) - (q * g));
        }
    float m1,m2,m3;
    m1=x2*g;
    m2=x2*h;
    m3=x2*i;
    if(m1>m2)
    {
        if(m1>m3)
            printf("amba has left with max. amount\n");
        else
            printf("ambalika has left with max. amount\n");
    }
    else if(m2>m3)
            printf("aambika has left with max. amount\n");
    else
            printf("ambalika has left with max. amount\n");
    return 0;
}


