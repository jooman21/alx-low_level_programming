#include <stdio.h>



/**
 *
 * main - Entry point
 *
 * Description: using sizeof to print the size of  various types.  
 *
 * Return: Always 0 (Success)
 *
*/

int main(void)

{
            /* sizof evaluates the size of the variable */
	    printf("Size of a char: %lu byte(s)\n", sizeof(char));
	    printf("Size of an int: %lu bytes(s)\n", sizeof(int));
	    printf("Size of a double: %lu bytes(s)\n", sizeof(double));
	    printf("Size of a long int: %lu bytes(s)\n", sizeof(long int));
	    printf("Size of a long long int: %lu bytes(s)\n", sizeof(long long int));
	    printf("Size of a flot: %lu byte(s)\n", sizeof(float));

	    return (0);
}
