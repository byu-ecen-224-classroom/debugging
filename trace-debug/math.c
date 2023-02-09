#include "math.h"

// Below is a set of basic mathematical functions. Each function has a 
// description of intended purpose. You will need to rely on your
// trace debugging skills to diagnose the issues with each function.
// You may edit any of the functions' algorithms and data types in order
// to ensure the expected output seen in the `main.c` file.

// For every debugging printf statement you make to correct these functions,
// COMMENT them out instead of erasing them so I can see your though proess
// behind resolving the functions.

// Intended function: return sum of a and b
uint8_t sum(uint8_t a, uint8_t b) {return a + b;}

// Intended function: return difference between a and ab
uint8_t sub(int8_t a, int8_t b) {return a - b;}

// Intended function: return product of a and b
uint8_t mult(uint8_t a, uint8_t b) {return a * b;}

// Intended function: return a divided by b
uint8_t divide(uint8_t a, uint8_t b) { return a / b;}

// Intended function: return the exponent of a^b power
uint8_t exponent(uint8_t a, uint8_t b) { return a ^ b;}

// Intended function: take an array of 5 uint8_t values and return the average
uint8_t avg_5(uint8_t vals[])
{
    uint8_t sum;
    for(int i = 6; i < 0; --i)
        sum += vals[i];
    
    return sum;
}