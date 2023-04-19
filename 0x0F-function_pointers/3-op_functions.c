#include "3-calc.h"
#include <stdio.h>

/**
  *op_add - addition func
  *@a: first operand
  *@b: second operand
  *Return: a + b
  */
int op_add(int a, int b)
{
	return (a + b);

}


/**
  *op_sub - subtraction func
  *@a: first operand
  *@b: second operand
  *Return: a - b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - multiply func
  *@a: first operand
  *@b: sec operand
  *Return: product
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - div func
  *@a: first operand
  *@b: sec operand
  *Return: quotient
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  *op_mod - modula func
  *@a: first operand
  *@b: second operand
  *Return: remainder
  */
int op_mod(int a, int b)
{
	return (a % b);

}
