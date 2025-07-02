#include "ft_printf.h"

size_t	ft_putunbr(const unsigned int n)
{
	if (n / 10)
		return (ft_putunbr(n / 10) + ft_putunbr(n % 10));
	else
		return (ft_putchar(n + '0'));
}