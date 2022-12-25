#include<stdio.h>
void main()
{
    int X,Y;
    printf ("enter the coordinates X and Y");
    scanf("%d%d",&X,&Y);
    if(X>0&&Y>0)
        printf("first quadrant");
    else if(X<0&&Y>0)
        printf("second quadrant");
    else if(X<0&&Y<0)
        printf("third quadrant");
    else
        printf("fourth quadrant");

}
