
/**
 * get_op_func - function pointer that selects the correct function
 * to perform operation
 * @s: pointer to char
 * Return: result
 *
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (*ops[i].op != *s)
	{
		i++;

		if ((i > 4 || s[1] != '\0'))
		{
			printf("Error\n");
			exit(99);
		}
	}

	return (ops[i].f);
}
