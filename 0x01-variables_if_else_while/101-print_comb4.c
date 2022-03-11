#include <stdio.h>

/**
* main - Print combinations of three digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
  int cents;
  int tens;
  int ones;
  
 for (cents = 0; cents <=7; cents++)
 {
    for (tens = cents + 1; tens <= 8; tens++)
    {
        for (ones = tens + 1; ones <= 9; ones++)
	{
	  putchar(cents + '0');
	  putchar(tens + '0');
	  putchar(ones + '0');

	  if (cents < 7)
	    {
	      putchar(',');
	      putchar(' ');
	    }
	}
    }
 } 
  putchar('\n');

  return (0);
}
