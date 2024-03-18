#include "3-op_functions.c"


/**
 * get_op_func - pointer to function to select correct function
 * @s: the operator passed as argument to the program
 * Return: a pointer to the function that corresponds to
 * the operator given as a parameter
 * not allowed to use switch, for, do..while, goto, else
 * only one if statement, one while loop
 * Return: if s does not match NULL
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

}
