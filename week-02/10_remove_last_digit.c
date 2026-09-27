#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x, y;
    printf("Enter a three digit Number:");
    scanf("%d", &x);
    y = x / 10;
    printf("%d", y);

    return 0;
}