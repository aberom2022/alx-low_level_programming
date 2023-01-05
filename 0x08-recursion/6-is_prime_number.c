#include "main.h"

/**
 * is_prime_number - determines if a number is prime
 * @n: number to be tested
 * Return: returns 1 if the input is prime number
 * otherwise returns 0 if number is not prime
 */

int is_prime_number(int n)
{
	int _is_prime = 0;

	if (n < 2)
		_is_prime = 0;
	else if (n == 2)
		is_prime = 1;
	else if (n % 2 == 1)
		is_prime = 1;

	return (is_prime);
}
