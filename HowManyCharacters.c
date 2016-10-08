//August 14, 2015. How many Character is in the string?

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    printf("Type your word: \n");
    string s = GetString();
    int n = strlen(s);
    printf("%d Characters\n", n);
}
