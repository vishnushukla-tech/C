#include <stdio.h>
int main()
{
    float a,b;
    printf("Enter length and breadth of rectangle:");
    scanf("%f %f" , &a , &b);
    printf("Area of rectangle is %f\n" , a*b);
    printf("Perimeter of rectangle is %f\n" , 2*(a+b));
    float radius;
    printf("Enter radius of circle:");
    scanf("%f" , &radius);
    printf("Area of circle is %f\n" , 3.14*radius*radius);
    printf("Circumference of circle is %f\n" , 2*3.14*radius);
    return 0;
    
}