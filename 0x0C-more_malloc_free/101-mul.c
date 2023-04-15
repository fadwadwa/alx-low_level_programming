#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * is_valid_num - checks the number
 * @num: pointer to char
 * Return: 1 if num is valid and 0 otherwise
 */
int is_valid_num(char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
	{
		if (!isdigit(num[i]))
			return (0);
	}
	return (1);
}
/**
 * multiply - multiplies two numbers
 * @num1: first number
 * @num2: second number
 * Return: the product of num1 and num2
 */
int multiply(char *num1, char *num2)
{
	return (atoi(num1) * atoi(num2));
}
/**
 * main - main function
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *num1, *num2;
	int result;

	if (argc != 3)
	{
		_putchar("Error\n");
		return (98);
	}
	num1 = argv[1];
	num2 = argv[2];
	if (!is_valid_num(num1) || !is_valid_num(num2))
	{
		_putchar("Error\n");
		return (98);
	}
	result = multiply(num1, num2);
	_putchar(result + '0');
	return (0);
}









