#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 *
 * Return: always 0 when success
 */

int main(void) /*Entry point */
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1); /* Return 1 when success */
}
