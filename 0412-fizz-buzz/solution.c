#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    // Set the return size so the caller knows how many elements are in the array
    *returnSize = n;

    // Allocate array of string pointers
    char** result = (char**)malloc(n * sizeof(char*));

    for (int i = 1; i <= n; i++) {
        // Allocate memory for each string. 
        // "FizzBuzz" is 8 chars + 1 null terminator = 9 bytes.
        result[i-1] = (char*)malloc(9 * sizeof(char));

        if (i % 3 == 0 && i % 5 == 0) {
            strcpy(result[i-1], "FizzBuzz");
        } else if (i % 3 == 0) {
            strcpy(result[i-1], "Fizz");
        } else if (i % 5 == 0) {
            strcpy(result[i-1], "Buzz");
        } else {
            // Convert integer to string
            sprintf(result[i-1], "%d", i);
        }
    }
    
    return result;
}   
