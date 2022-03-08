#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*joinme(char *s1, char *s2)
{
	int		i;
	char	*dest;

	i = 0;
	dest = s1;
	while (*s1)
		dest[i++] = *s1++;
	while (*s2)
		dest[i++] = *s2++;
	dest[i] = '\0';
	return (dest);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*dest;

	if (argc == 3)
	{
		dest = joinme(argv[1], argv[2]);
		i = 0;
		while (dest[i])
		{
			j = i - 1;
			while (j >= -1)
			{
				if (dest[j] == dest[i])
					break ;
				else if (j == 0 || i == 0)
					ft_putchar(dest[i]);
				j--;
			}
			i++;
		}
	}
	ft_putchar('\n');
}
