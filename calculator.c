#include <cs50.h>
#include <stdio.h>

int main(void) {
    // Prompt user for x
    int x = get_int("X: ");

    // Prompt user for y
    int y = get_int("Y: ");

    // Add numbers
    int z = x + y;

    // Perform addition
    printf("%i\n", z);
}
