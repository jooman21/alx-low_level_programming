#include "main.h"
/**
 * main - entry block
 * Description: Write a program that prints _putchar
 * Return: 0
 **/
int main(void)
{
	char joo[]= "_putchar";

	int c;

	for (c = 0; c < 7; c++)
	{
		_putchar(joo[c]);
	}
	_putchar('\n');
	return (0);
}
