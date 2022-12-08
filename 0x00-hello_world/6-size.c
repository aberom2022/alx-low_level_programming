#include <studio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printf("size of a char: %ln byte(s)\n", sizeof(char));
	printf("size of an int: %ln byte(s)\n", sizeof(int));
	printf("size of a long int: %ln byte(s)\n", sizeof(long int));
	printf("size of a long long int: %ln byte(s)/n", sizeof(long long int));
	printf("size of a float: %ln byte (s)\n", sizeof(float));
	return (0);
}
