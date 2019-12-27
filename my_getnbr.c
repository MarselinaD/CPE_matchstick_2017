/*
** EPITECH PROJECT, 2017
** getnbr
** File description:
** coding
*/

#include <unistd.h>

int	my_getnbr(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i] != '\0')
	{
		nb = nb + str[i] - 48;
		nb = nb * 10;
		i++;
	}
	nb = nb / 10;
	return (nb);
}

int	str_isnum(char *str)
{
	int	i = 0;

	while (str[i] != '\0') {
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}
