#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	do_op(int a, char op, int b)
{
	int	result;

	result = 0;
	if (op == '*')
		result = a * b;
	else if (op == '+')
		result = a + b;
	else if (op == '-')
		result = a - b;
	else if (op == '/')
		result = a / b;
	else if (op == '%')
		result = a % b;
	return (result);
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (argc == 4)
		printf("%i", do_op(a, argv[2][0], b));
	printf("\n");
	return (0);
}
