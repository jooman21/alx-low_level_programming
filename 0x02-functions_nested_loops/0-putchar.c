#include "main.h"
/**
 * main -  Print the word "Holberton"
 * Description: Write a program that prints _putchar
 * Return: Always 0 (Success)
 **/
int main(void)
{

int i;
char j[] = "_putchar";

for (i = 0; i < 7; i++)

{
_putchar(j[i]);

}
_putchar('\n');

return (0);
}
