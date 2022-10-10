#include <stdio.h>
#include <assert.h>


int max(int* numbers, int size)
{
    int i; /* counting variable */
    int max = 0; /* the max value */

    assert(size > 0);

    for (i = 0; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    return max;
}
