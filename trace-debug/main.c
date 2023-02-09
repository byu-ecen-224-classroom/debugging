#include <stdio.h>
#include <stdint.h>

#include "math.h"

int main()
{

    // You may only edit data types in this file. If your corrected function
    // in `math.c` works correctly, your variables should have the values
    // of the comments on the right.

    uint8_t sum_1 = sum(1,2);                       // = 3
    uint8_t sum_2 = sum(201, 68);                   // = 269
    uint8_t sum_3 = sum(0xa4, 0b01100100);          // = 264

    uint8_t sub_1 = sub(10, 8);                     // = 2
    uint8_t sub_2 = sub(90, 120);                   // = -30
    uint8_t sub_3 = sub(240, -17);                  // = 257

    uint8_t mult_1 = mult(7, 2);                    // = 14
    uint8_t mult_2 = mult(45, 64);                  // = 2880
    uint8_t mult_3 = mult(3, 2);                    // = 6

    uint8_t divide_1 = divide(10, 2);               // = 5
    uint8_t divide_2 = divide(3, 0);                // = 0
    uint8_t divide_3 = divide(1, 7);                // = 0.14285714285

    uint8_t exp_1 = exponent(2, 0);                 // = 1
    uint8_t exp_2 = exponent(5, 10);                // = 9765625
    uint8_t exp_3 = exponent(2, 2);                 // = 4
    
    uint8_t arr_1[] = {10, 11, 13, 15, 2};         
    uint8_t arr_2[] = {100, 91, 127, 23, 8};       
    uint8_t arr_3[] = {255, 255, 255, 255, 255};   

    uint8_t avg_5_1 = avg_5(arr_1);                 // = 10.2
    uint8_t avg_5_2 = avg_5(arr_2);                 // = 69.8
    uint8_t avg_5_3 = avg_5(arr_3);                 // = 255
    
    // Print all the variables below to ensure that they are the correct value.
    

    return 0;
}