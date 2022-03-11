#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 when success
 */

int main(void) /*Entry point */
{
	char varcharacter;
	int varinteger;
	long varlong;
	long long varlonglong;
	float varfloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(varcharacter));
	printf("Size of an int: %lu byte(s)\n", sizeof(varinteger));
	printf("Size of a long int: %lu byte(s)\n", sizeof(varlong));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(varlonglong));
	printf("Size of a float: %lu byte(s)\n", sizeof(varfloat));
	return (0); /* Return 0 when success */
}
