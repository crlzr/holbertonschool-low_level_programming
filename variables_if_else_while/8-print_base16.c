#include <stdio.h>

/**
 * main - print hexadecimal numbers
 * Return: Always 0 (Success)
 */


int main(void)

{
int i;

for (i = 48; i < 58; i++)
{
	putchar(i);
}
for (i = 97; i < 104; i++)
{
	putchar(i);
}
	putchar('\n');
	return (0);

}