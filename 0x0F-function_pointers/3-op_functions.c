#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adds the argument
 * @a: the 1st operand
 * @b: the 2nd operand
 * Return: a value
 */
int op_add(int a, int b)
{
	int calc;

	calc = a + b;
	return (calc);
}
/**
 * op_sub - subtracts the arguments
 * @a: the 1st operand
 * @b: the 2nd operand
 * Return: a value
 */
int op_sub(int a, int b)
{
	int calc;

	calc = a - b;
	return (calc);
}
/**
 * op_mul - multiplies the arguments
 * @a: the 1st operand
 * @b: the 2nd operand
 * Return: a value
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides the arguments
 * @a: the 1st operand
 * @b: the 2nd operand
 * Return: a value
 */
int op_div(int a, int b)
{
	int calc;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		calc = a / b;
	}
	return (calc);
}
/**
 * op_mod - calculates the remainder of the arguments
 * @a: the 1st operand
 * @b: the 2nd operand
 * Return: a value
 */
int op_mod(int a, int b)
{
	int calc;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		calc = a % b;
	}
	return (calc);
}
