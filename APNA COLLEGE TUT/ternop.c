#include <stdio.h>
 int main()
 {
    int age;
    printf("Enter the Age:");
    scanf("%d" ,&age);
    age>18 ?printf("Adult\n") : printf("Minor"); 
    return 0;
 }