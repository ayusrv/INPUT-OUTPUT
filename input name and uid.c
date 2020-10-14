
#include<stdio.h>
#include<stdlib.h>
int main()
{
int side, cut_out, new_side, number_of_cubes;
printf("enter the length of the side to be painted out ");
scanf("%d",&side);
printf("enter the new side of the cube to be cut out ");
scanf("%d", &cut_out);
new_side=side/cut_out;
number_of_cubes= new_side*new_side*new_side;
printf("no of smaller cubes generated= %d", number_of_cubes);
return(0);
}
