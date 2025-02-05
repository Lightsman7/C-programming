#include <stdio.h>
#include <cs50.h>

int main(void) {
    char c = get_char("Do you agree? ");
        printf("not agree\n");
    if (c == 'y' || c == 'Y') {
        printf("agree\n");
    } else if (c == 'n' || c == 'N') {
        printf("not agree\n");
    }
}