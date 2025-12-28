#include <stdio.h>

// Define constants for the range of the multiplication tables.
// We want tables for numbers 1 through 9.
// Each table will show multiplication up to 10 (LIMIT + 1).
#define MAX_TABLE_NUM 9
#define MIN_NUMBER 1

int main(void)
{
    // 'i': Outer loop counter (the number we are creating the table for).
    long    i;
    // 'j': Inner loop counter (the multiplier).
    long    j;

    // Initialize counters.
    i = MIN_NUMBER;
    j = MIN_NUMBER;

    // --- Outer Loop ---
    // Iterate from MIN_NUMBER (1) to MAX_TABLE_NUM (9).
    for (i = MIN_NUMBER; i <= MAX_TABLE_NUM; i++)
    {
        // Print usage header for the current table.
        printf("\n TABLA DE MULTIPLICAR DEL %ld\n", i);
        
        // --- Inner Loop ---
        // Iterate for the multipliers.
        // Logic note: The original code used 'LIMITE + 1'.
        // Since MAX_TABLE_NUM is 9, this loops j from 1 to 10.
        for (j = MIN_NUMBER; j <= MAX_TABLE_NUM + 1; j++)
        {
            // Print the multiplication line: " i x j = result "
            printf("\t%ld x %ld = %ld\n", i, j, i * j);
        }
    }
    return (0);
}