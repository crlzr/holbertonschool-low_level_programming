#include <stdio.h>

/**
 *  main - entry point of code - using putchar
 * Return: Sucess is 0
 */

int main(void)

{
char letter = 'a';
char upperLetter = 'A';

while (letter <= 'z')
{
	putchar(letter);
	letter++;
}

while (upperLetter <= 'Z')
{
	putchar(upperLetter);
	upperLetter++;
}

	putchar('\n');
	return (0);

}
