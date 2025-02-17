#include "main.h"

void print_binary(unsigned long int n)
{
    if (n > 1)
        print_binary(n >> 1);  // Recursive call with the number shifted to the right

    // Print the least significant bit (LSB) of the current number
    putchar((n & 1) ? '1' : '0');
}
