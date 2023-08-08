#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    int sum = 0;

    if (argc >= 1) {
        if (strtol(argv[1], NULL, 10) == NULL) {
            printf("Usage: ./add_positive_numbers <num_numbers>\n");
            return 1;
        }

              for (int i = 2; i <= atoi(argv[1]); i++) {
            char c;
            int n;

            if (sscanf(argv[i], "%d", &n) > 0) {
                if (n < 0) {
                    printf("Error: argument cannot be negative\n");
                } else {
                    sum += n;
                }
            } else {
                printf("Error: argument must be a positive number\n");
            }
        }
    } else {
        printf("No positive numbers were passed to the program\n");
        return 1;
    }

    printf("The sum of all positive numbers is: %d\n", sum);

    return 0;
}

