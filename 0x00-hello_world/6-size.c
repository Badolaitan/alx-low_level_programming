#include <stdio.h>
#include <stdlib.h>

/**
 * Description:main - The main entry point
 *
 *
 * Return: Always return 0 if successful 
 */

int main(void)
{
	char letters;
	int numbers;
	long int bignumber;
	long long int digits;
	float decimal;

	printf("Size of a char: %zu byte(s)\n", sizeof(letters));
	printf("Size of an int: %zu byte(s)\n", sizeof(numbers));
	printf("Size of a long int: %zu byte(s)\n", sizeof(bignumber));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(digits));
	printf("Size of a float: %zu byte(s)\n", sizeof(decimal));
	return (0);
}
