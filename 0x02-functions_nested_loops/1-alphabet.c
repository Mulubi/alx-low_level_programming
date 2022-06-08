#include "main.h"

/** 
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: do not need to return anything if the return type is void. 
 */

void print_alphabet(void)
{
		char letter = 'a';

		for (letter <= 'z');
		{
			_putchar(letter);
			letter++;
		
		}
		_putchar('\n');
}
