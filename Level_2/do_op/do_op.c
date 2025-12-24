#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	do_op(int a, char op, int b)
{
	int	result = 0;

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
	int	a = atoi(argv[1]);
	int	b = atoi(argv[3]);

	if (argc == 4)
		printf("%i", do_op(a, argv[2][0], b));
	printf("\n");
	return (0);
}
