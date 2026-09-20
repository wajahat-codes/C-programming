
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int length, breadth, area;
    printf("Enter the length:\n");
     scanf("%d", &length);
    printf("Enter the breadth:\n");
    scanf("%d", &breadth);
    area = length * breadth;
    printf("The area of the reactangle is %d", area);
    return 0;
}