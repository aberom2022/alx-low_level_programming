#include <stdio.h>
#include "main.h"

/**
 * main - print the number of the program
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, int *argv[])
{
	(void) argv; /*Ignore argv*/

	printf("%i\n", argc - 1);

	return (0);
}
