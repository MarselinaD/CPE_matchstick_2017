/*
** EPITECH PROJECT, 2018
** display
** File description:
** coding
*/

#include "include.h"

void	display_line(map_t *map)
{
	int	nbr;
	int	i = 0;

	nbr = 1 + (map->size - 1) * 2 + 1;
	while (i++ <= nbr)
		my_putchar('*');
	my_putchar('\n');
}

void	display(map_t *map)
{
	int	line = 0;
	int	col;

	display_line(map);
	while (map->map[line] != NULL) {
		col = 0;
		my_putchar('*');
		while (map->map[line][col] != '\0') {
			my_putchar(map->map[line][col]);
			col++;
		}
		line++;
		my_putchar('*');
		my_putchar('\n');
	}
	display_line(map);
}
