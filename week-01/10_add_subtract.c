#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    printf("%d+%d =%d\n%d-%d =%d\n", a, b, a + b, a, b, a - b);
    return 0;
}