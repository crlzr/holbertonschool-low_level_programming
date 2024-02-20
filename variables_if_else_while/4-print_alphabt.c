#include <stdio.h>

/**
 * main - entry point of code, print letters, not q and e
 * Return: Always 0
 */

int main(void)

{
int letter = 'a';

while (letter <= 'z' && letter !='q' && letter != 'e')
{
	putchar(letter);
	letter++;
}

	putchar('\n');
	return (0);
}
