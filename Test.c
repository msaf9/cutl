#include "Add.c"
#include "UnitTest.c"

int add(int, int);
void numberEquals(double number1, double number2);

void main()
{
    int i;
    int result = add(1, 2);
    // numberEquals(result, 3);
    // numberEquals(2.5, 3.5);
    int array1[3], array2[3];

    array1[0] = 1;
    array1[1] = 2;
    array1[2] = 3;

    array2[0] = 1;
    array2[1] = 2;
    array2[2] = 3;

    for (i = 0; i < 3; i++)
    {
        numberEquals(array1[i], array2[i]);
    }
}