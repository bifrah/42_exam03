#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	if (s)
	{
		write(1, s, ft_strlen(s));
		return (ft_strlen(s));
	}
	return (0);
}

int	ft_putnbr(int nb)
{
	int	count = 0;

	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = -147483648;
			count++;
		}
		nb *= -1;
		count++;
	}
	if (nb > 9)
		count += ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + 48);
	count++;
	return (count);
}

int	ft_hexa(int n)
{
	long long	conv = 4294967296;
	long long	nb = n;
	int			count = 1;

	if (nb < 0)
	{
		nb *= -1;
		nb = conv - nb;
	}
	if (nb > 15)
		count += ft_hexa(nb / 16);
	if ((nb % 16) < 10)
		ft_putchar((nb % 16) + 48);
	if ((nb % 16) > 9)
		ft_putchar((nb % 16) + 87);
	return (count);
}

unsigned int	parser(const char *format, int i, va_list parameters)
{
	char			*s;
	long			nb;
	unsigned int	x;
	int				count = 0;

	if (format[i] == 's')
	{
		s = va_arg(parameters, char *);
		count = ft_putstr(s);
	}
	if (format[i] == 'd')
	{
		nb = va_arg(parameters, int);
		count = ft_putnbr(nb);
	}
	if (format[i] == 'x')
	{
		x = va_arg(parameters, unsigned int);
		count = ft_hexa(x);
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	parameters;
	int		count = 0;
	int		i = 0;
	int		percent = 0;

	va_start(parameters, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			i += ft_putchar(format[i]);
		if (format[i] == '%')
		{
			percent++;
			i++;
			count += parser(format, i, parameters);
			i++;
		}
	}
	va_end(parameters);
	return (count + i - (2 * percent));
}
