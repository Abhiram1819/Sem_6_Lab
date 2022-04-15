/*
Question: Write a C program to reverse a sentence
*/

#include <stdio.h>

void reverse();

int main()
{
    reverse();
}

void reverse()
{
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverse();
        printf("%c", c);
    }
}

/*
Author's Solution:
*/

#include <stdio.h>
void reverseSentence();
int main() {
    reverseSentence();
    return 0;
}

void reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}
