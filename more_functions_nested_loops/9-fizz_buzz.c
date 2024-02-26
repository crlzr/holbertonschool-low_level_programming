#include <stdio.h>

/**
 * main - entry point of code
 * Return: 0 (success)
 */

int main(void)
{
	int number = 1;

	for (number = 1; number <= 100; number++)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			printf("FizzBuzz ");
		}


			else if (number % 3 == 0)
			{
				printf("Fizz ");
			}

				else if (number % 5 == 0)
				{
					printf("Buzz ");
				}
					else
					{
						printf("%d ", number);

					}
	}
	printf("\n");
	return (0);
}
