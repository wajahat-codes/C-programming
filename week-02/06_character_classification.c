#include <stdio.h>
int main(int argc, char const *argv[])
{
    char w;
    printf("Enter a character:");
    scanf("%c", &w);
    if (w >= 'A' && w <= 'Z')
    {
        printf("Uppercase Alphabet");
    }
    else if (w >= 'a' && w <= 'z')
    {
        printf("lowercase alphabet");
    }
    else if (w >= '0' && w <= '9')
    {
        printf("Digit");
    }
    else
        printf("Special Character");

    return 0;
}