/*
** EPITECH PROJECT, 2018
** check
** File description:
** coding
*/

#include "include.h"

int	count_pipe(map_t *map, int line)
{
	int	col = 0;
	int	count = 0;

	while (map->map[line][col] != '\0')
	{
		if (map->map[line][col] == '|')
			count++;
		col++;
	}
	return (count);
}

int	check(char *av, int line, map_t *map)
{
	if (!av || my_strlen(av) == 0 || str_isnum(av) == 1) {
		my_putstr("Error: invalid input\n");
		return (1);
	}
	else if (!line || line > map->size) {
		my_putstr("Error: this line is out of range\n");
		return (1);
	}
	return (0);
}

int	check_m(char *av, map_t *map, int m, int line)
{
	if (!av || my_strlen(av) == 0 || str_isnum(av) == 1) {
		my_putstr("Error: invalid input\n");
		return (1);
	}
	else if (m <= 0 || m > map->matches || m > count_pipe(map, line - 1)) {
		if (m > map->matches) {
			my_putstr("Error: you cannot move more than ");
			my_put_nbr(map->matches);
			my_putstr(" per turn\n");
			return (1);
		}
		else if (m > count_pipe(map, line - 1)) {
			my_putstr("Error: not enough matches on this line\n");
			return (1);
		}
		my_putstr("Error: you have to remove at least one match\n");
		return (1);
	}
	return (0);
}
