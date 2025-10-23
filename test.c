#include <stdio.h>
#include <stdarg.h>
#include "includes/ft_printf.h"
#include <string.h>
int main()
{
	// printf("\nmy printf test - total printed chars : %d\n",
	// ft_printf(
	// "%s\n%d\n%c\n%p", "hi", 1337, 'L', (void *)0));

	// printf("\nla printf test - total printed chars : %d\n",
	// printf(
	// "%s\n%d\n%c\n%p", "hi", 1337, 'L', (void *)0));
	
	// printf("\nla printf test - total printed chars : %d\n",
	// printf(
	// "%x - %X              %%", 454545, -454545));

	// printf("\nmy printf test - total printed chars : %d\n",
	// ft_printf(
	// "%x - %X              %%", 454545, -454545));

	// printf("\nla printf test - total printed chars : %d\n",
	// printf(
	// "%u", -454545));

	// printf("\nmy printf test - total printed chars : %d\n",
	// ft_printf(
	// "%u", -454545));
	
	// ft_printf("%i\n", 0x2a);
	  
	// ft_printf("%d\n", 0b101010);
	// ft_printf("%d\n", 052);

	// printf("\nla printf test - total printed chars : %d\n",
	// printf(
	// "%p %p", 454545, -454545));

	// printf("\nmy printf test - total printed chars : %d\n",
	// ft_printf(
	// "%p %p", 454545, -454545));

	int p = printf("%c - %s - %p %d - %i - %u - %x %X %%\n", 'b', NULL, ((void*)0), 20, -20, -1, -1, 200000000);
	int ft_p = ft_printf("%c - %s - %p %d - %i - %u - %x %X %%\n", 'b', NULL, ((void*)0), 20, -20, -1, -1, 200000000);

	printf("my printf : %d\nlan printf : %d", ft_p, p);
	return 0;
}