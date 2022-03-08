#include <unistd.h>

int	check(char *s, char c, int index)
{
	int i = 0;

	while (i < index)
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (check(argv[1], argv[1][i], i) == 0)
			{
				j = 0;
				while (argv[2][j])
				{
					if (argv[2][j] == argv[1][i])
					{
						write(1, &argv[1][i], 1);
						break ;
					}
					j++;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
