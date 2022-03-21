#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: input integer
 * @b: input integer
 * Return: 0
 */
void swap_int(int *a, int *b);
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
