#include <stdio.h>
#include <stdarg.h>
#include "includes/ft_printf.h"
#include <string.h>
int main()
{
	printf("\nmy printf test - total printed chars : %d\n",
	ft_printf(
	"%s\n%d\n%c\n%p", "hi", 1337, 'L', (void *)0));

	printf("\nla printf test - total printed chars : %d\n",
	printf(
	"%s\n%d\n%c\n%p", "hi", 1337, 'L', (void *)0));

	printf("----------------------------------------------------------------\n");

		printf("\nmy printf test - total printed chars : %d\n",
	ft_printf(
	"%s\n%d\n%c\n%p", "hi", 1337, 'L', (void *)0));

	printf("\nla printf test - total printed chars : %d\n",
	printf(
	"%s\n%d\n%c\n%p", "hi", 1337, 'L', (void *)0));

printf("----------------------------------------------------------------\n");

	printf("\nla printf test - total printed chars : %d\n",
	printf(
	"%x - %X              %%", 454545, -454545));

	printf("\nmy printf test - total printed chars : %d\n",
	ft_printf(
	"%x - %X              %%", 454545, -454545));

	printf("----------------------------------------------------------------\n");

		printf("\nla printf test - total printed chars : %d\n",
	printf(
	"%x - %X              %%", 454545, -454545));

	printf("\nmy printf test - total printed chars : %d\n",
	ft_printf(
	"%x - %X              %%", 454545, -454545));

	printf("----------------------------------------------------------------\n");

	printf("\nla printf test - total printed chars : %d\n",
	printf(
	"%d - %u              %%", 454545, -34524));

	printf("\nmy printf test - total printed chars : %d\n",
	ft_printf(
	"%d - %u              %%", 454545, -34524));

	printf("----------------------------------------------------------------\n");
	printf("\nla printf test - total printed chars : %d\n",
	printf(
	"test against signed : %u _ against unsigned MAX : %u _ basic test : %u", -454545, 4294967295, 4294));

	printf("\nmy printf test - total printed chars : %d\n",
	ft_printf(
	"test against signed : %u _ against unsigned Max : %u _ basic test : %u", -454545, 4294967295, 4294));
	
	printf("----------------------------------------------------------------\n");

	printf("\nla printf test - total printed chars : %d\n",
	printf(
	"%u", -454545));

	printf("\nmy printf test - total printed chars : %d\n",
	ft_printf(
	"%u", -454545));

	printf("----------------------------------------------------------------\n");

	ft_printf("%i\n", 0x2a);
	  
	ft_printf("%d\n", 0b101010);
	ft_printf("%d\n", 052);

	printf("----------------------------------------------------------------\n");

	printf("\nla printf test - total printed chars : %d\n",
	printf(
	"%p %p", 454545, -454545));

	printf("\nmy printf test - total printed chars : %d\n",
	ft_printf(
	"%p %p", 454545, -454545));

	printf("----------------------------------------------------------------\n");

	int p = printf("%c - %s - %p %d - %i - %u - %x %X %%\n", 'b', NULL, ((void*)0), 20, -20, -1, -1, 200000000);
	int ft_p = ft_printf("%c - %s - %p %d - %i - %u - %x %X %%\n", 'b', NULL, ((void*)0), 20, -20, -1, -1, 200000000);

	printf("\nmy printf : %d\nlan printf : %d\n", ft_p, p);

	printf("----------------------------------------------------------------\n");

	printf("\none perc : %d", printf("%"));
	printf("\none perc : %d\n", ft_printf("%"));

	printf("----------------------------------------------------------------\n");

	printf("\nlan printf format = NULL : %d", printf(NULL));
	printf("\nmy printf format = NULL : %d", ft_printf(NULL));

	printf("\n----------------------------------------------------------------\n");

	printf("\nlan printf format = NULL : %d", printf(""));
	printf("\nmy printf format = NULL : %d", ft_printf(""));
	return 0;
}