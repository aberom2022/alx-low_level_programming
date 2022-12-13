#include <stdio.h>

/**
 * numLength - returns the length of string
 * @num: operand number
 * Return: number of digit
 */
int numLength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}
/**
 * *main - prints the first 98 fibonaci sequences
 * Return: 0
 */
int main(void)
{
	unsigned long f1 = 1, f2 = 2, tmp, mx = 100000000, f10 = 0, f20 = 0, tmpo = 0;
	short int i = 1, initialos;

	while (i <= 98)
	{
		if (f10 > 0)
			printf("%d", f10);
		intialos = numLength(mx) - 1 - numLength(f1);
		while (f10 > 0 && initialos > 0)
		{
			printf("%i", 0);
			initialos--;
		}
		printf("%lu", f1);

		tmp = (f1 + f2) % mx;
		tmpo = f10 + f20 + (f1 + f2) / mx;
		f1 = f2;
		f10 = f20;
		f2 = tmp;
		f20 = tmpo;
		if (i != 98)
			ptintf(",");
		else
			printf("\n");
		i++;
	}
	return (0);
}
