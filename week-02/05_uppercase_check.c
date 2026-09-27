#include <stdio.h>
int main(int argc, char const *argv[])
{
    char a;
    printf("Enter a character:");
    scanf("%c", &a);
    if (a >= 'A' && a <= 'Z')
    {
        printf("Uppercase Alphabet");
    }
    else
        printf("Non-Uppercase Alphabet");

    return 0;
}