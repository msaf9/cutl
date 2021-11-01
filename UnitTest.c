#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <ctype.h>

void numberEquals(double number1, double number2)
{
    int passed = 0, failed = 0, total = 0;
    if (!(isdigit(number1) && isdigit(number2)))
    {
        if (number1 == number2)
        {
            passed++;
        }
        else
        {
            failed++;
        }
        total = passed + failed;
    }
    else
    {
        printf("Error: %d", errno);
        exit(EXIT_FAILURE);
    }
    printf("::Test Summary::\n");
    if (passed > 0)
    {
        printf("%d of %d test cases passed.\n", passed, total);
    }
    if (failed > 0)
    {
        printf("%d of %d test cases failed.\n", failed, total);
    }
    if (total > 1)
    {
        printf("%d test cases executed.\n", total);
    }
    else
    {
        printf("%d test case executed.\n", total);
    }
    printf("\n");
}