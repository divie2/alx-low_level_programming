#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count <= 9)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
			putchar (letters);
		putchar ('\n');
		count++;
	}
}
