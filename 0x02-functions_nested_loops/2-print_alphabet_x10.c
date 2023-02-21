/*
 * File: 2-print_alphabet_x10.c
 * Auth: nnaemeka divine
 */
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lower case`.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letters;

	while (count++ <= 9)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
			_putchar(letters);
		_putchar('\n');
	}
}
