//program to calculate area of circle.
#include<stdio.h>
int main(){
    //variable declare
    int radius ;

    //input
    printf("enter a radius of a circle:\n");
    scanf("%d",&radius);

    //variable declare
    float pie = 3.14 ;
    float area ;
    area = pie * radius * radius ;
    
    //end
    printf("Area of a circle with radius is %f",area , radius);
    return 0;
}
