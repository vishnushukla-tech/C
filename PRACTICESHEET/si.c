#include <stdio.h>
int main()
 {
    float p,r,t;
    printf("Enter principal amount, rate of interest and time in years:");
    scanf("%f %f %f" , &p , &r , &t);
    printf("Simple Interest is %f\n" , (p*r*t)/100);
    return 0;
 }