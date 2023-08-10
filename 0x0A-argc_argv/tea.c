#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int add_positive_numbers_from_command_line_arguments(int argc, char *argv[])
{
    int sum = 0;
    int i;

    for (i = 0; i < argc; i++)
    {
        if (isdigit(argv[i][0]))
        {
            sum += atoi(argv[i]);
        }
    }
    return sum;
}

int main(int argc, char *argv[])
{
    int result = add_positive_numbers_from_command_line_arguments(argc, argv);
    if (argc == 0)
    {
        printf("You need to enter a non-empty command line argument\n");
    }
    else if (argc == 1)
    {
        printf("No positive numbers were entered\n");
    }
    else if (argc > 1)
    {
        printf("The sum of the positive numbers entered is %d\n", result);
    }

    return 0;
}

