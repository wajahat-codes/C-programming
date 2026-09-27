#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x, y, z;
    printf("Enter a number:");
    scanf("%d %d %d", &x, &y, &z);

    if (x > y && x > z)
    {
        printf("x = %d is the largest", x);
    }
    else if (y > x && y > z)
    {
        printf("y = %d is the largest", y);
    }
    else
        printf("z = %d is the largest", z);
    return 0;
}