#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check(char *str, char c, int index)
{
	int	i = 0;

	while(i < index)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return(0);
}

int	main(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (ft_check(argv[1], argv[1][i], i) == 0)
			{
				j = 0;
				while(argv[2][j])
				{
					if (argv[2][j] == argv[1][i])
					{
						ft_putchar(argv[1][i]);
						break ;
					}
					j++;
				}
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
