#include<stdio.h>
int main()
{
    unsigned int x;
    float y;
    scanf("%d",&x);
    scanf("%f",&y);
    //x<=2000 && x>0 ;
    //y<=2000 && y>=0 ;
 
    if(x%5==0 && x+0.5<=y && x<=2000 && x>0 && y<=2000 && y>=0)
    {
        printf("%.2f",y-x-0.50);
    }
    else if(x<=2000 && x>0 && y<=2000 && y>=0)
    {
        printf("%.2f",y);
    }
    return 0;
} 
