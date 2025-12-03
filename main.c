#include "ft_printf.h"

int	main(void)
{
	printf("%s", "\n========> Printing Character [\%c] <========\n");

	int print1test = ft_printf("\nnew output: %c", 'Z');
	int print1 = printf("\n OG output: %c", 'Z');
	printf("\n%s", "_______________");
	printf("\nnew count: %d", print1test);
	printf("\n OG count: %d\n", print1);
	//printf("\n%s\n", "======================================");


	printf("%s", "\n\n========> Printing String [\%s] <========\n");

	int print2test = ft_printf("\nnew output: %s", "I\'m a string");
	int print2 = printf("\n OG output: %s", "I\'m a string");
	printf("\n%s", "_______________");
	printf("\nnew count: %d", print2test);
	printf("\n OG count: %d\n", print2);


	printf("%s", "\n\n========> Printing Decimal or Integer [\%d \\ \%i] <========\n");

	int print3test = ft_printf("\nnew output 1: %d %i", 1337, -1337);
	int print32test = ft_printf("\nnew output 2: %d %i", -2147483648, -2147483648);
	int print3 = printf("\n OG output 1: %d %i", 1337, -1337);
	int print32 = printf("\n OG output 2: %d %i", -2147483648, -2147483648);
	printf("\n%s", "_______________");
	printf("\nnew count 1: %d", print3test);
	printf("\n OG count 1: %d\n", print3);
	printf("\nnew count 2: %d", print32test);
	printf("\n OG count 2: %d\n", print32);


	printf("%s", "\n\n========> Printing Unsigned Decimal [\%d] <========\n");

	unsigned n = 256;
	int print4test = ft_printf("\nnew output: %d", n);
	int print4 = printf("\n OG output: %d", n);
	printf("\n%s", "_______________");
	printf("\nnew count: %d", print4test);
	printf("\n OG count: %d\n", print4);


	printf("%s", "\n\n========> Printing NULL [\%s \\ \%p] <========\n");

	int print5test = ft_printf("\nnew output for [s]: %s", NULL);
	int print52test = ft_printf("\nnew output for [p]: %p", NULL);
	int print53test = ft_printf("\nnew output for [x]: %x", NULL);
	int print54test = ft_printf("\nnew output for [X]: %X", NULL);
	int print5 = printf("\n OG output for [s]: %s", NULL);
	int print52 = printf("\n OG output for [p]: %p", NULL);
	int print63 = printf("\n OG output for [x]: %x", NULL);
	int print64 = printf("\n OG output for [X]: %X", NULL);
/* 	printf("\n%s", "_______________");
	printf("\nnew count for [s]: %d", print5test);
	printf("\n OG count for [s]: %d\n", print5);
	printf("\nnew count for [p]: %d", print52test);
	printf("\n OG count for [p]: %d\n", print52); */


	printf("%s", "\n\n========> Printing hexes [\%x \\ \%X] <========\n");

	int print6test = ft_printf("\nnew output for [x]: %x", 305441741);
	int print62test = ft_printf("\nnew output for [X]: %X", 305441741);
	int print6 = printf("\n OG output for [x]: %x", 305441741);
	int print62 = printf("\n OG output for [X]: %X", 305441741);

/* 	ft_printf("%x", 305441741);  // → "1234abcd"
	ft_printf("%X", 305441741);  // → "1234ABCD" */

	printf("%s", "\n\n========> Printing edge cases [\%x \\ \%X] <========\n");

	int print7test = ft_printf("\nnew output for (void *)1: %p", (void *)1);
	int print72test = ft_printf("\nnew output for (void *)-1: %p", (void *)-1);
	int print7 = printf("\n OG output for (void *)1: %p", (void *)1);
	int print72 = printf("\n OG output for (void *)-1: %p", (void *)-1);


	printf("\n%s\n", "_______________");
}