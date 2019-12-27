/*
** EPITECH PROJECT, 2018
** remove
** File description:
** coding
*/

#include "include.h"

void	remove_matches(map_t *map, int size, int matches)
{
	int	col;
	int	count;

	count = 1;
	col = my_strlen(map->map[size - 1]) - 1;
	while (col >= 0 && matches > 0) {
		if (map->map[size - 1][col] == '|')
			count++;
		col--;
	}
	col = my_strlen(map->map[size - 1]) - 1;
	while (col >= 0 && matches > 0) {
		if (map->map[size - 1][col] == '|') {
			map->map[size - 1][col] = ' ';
			matches--;
		}
		col--;
	}
}
