#include <stdio.h>
 int main()
  {
    int a,b,c;
    printf("Enter Two Numbers:");
    scanf("%d %d" , &a , &b);
    c=a;
    a=b;
    b=c;
    printf("After Swapping a=%d b=%d",a,b);
    return 0;
  }