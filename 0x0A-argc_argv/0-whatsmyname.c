#include <stdio.h>

/**
 * main - write a program that print a name, followed by a new line
 * you should not remove path before name of the program
 *
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
