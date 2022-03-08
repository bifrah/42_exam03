#include <unistd.h>

static char	*joinnomalloc(char *s1, char *s2)
{
	char	*dest;
	int		i;

	i = 0;
	dest = s1;
	while (*s1 != '\0')
		dest[i++] = *s1++;
	while (*s2 != '\0')
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
		dest = joinnomalloc(argv[1], argv[2]);
		i = 0;
		while (dest[i])
		{
			j = i - 1;
			while (j >= -1)
			{
				if (dest[i] == dest[j])
					break ;
				else if (j == 0 || i == 0)
					write(1, &dest[i], 1);
				j--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
