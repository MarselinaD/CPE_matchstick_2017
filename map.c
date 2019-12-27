/*
** EPITECH PROJECT, 2018
** map
** File description:
** coding
*/

#include <string.h>
#include "include.h"

char	**mymap(int size)
{
	char	**map = NULL;
	int	line = 0;
	int	col = 0;
	int	space;
	int	i = 0;
	int	max;
	int	index;

	index = 1;
	space = size - index;
	max = (1 + space * 2) - ((size - index) * 2);
	map = malloc(sizeof(*map) * (size + 1));
	while (line < size) {
		space = size - index;
		map[line] = malloc(sizeof(char) * (max + space * 2 + 1));
		col = 0;
		i = 0;
		while (i < space) {
			map[line][col] = ' ';
			col++;
			i++;
		}
		i = 1;
		while (i <= max) {
			map[line][col] = '|';
			col++;
			i++;
		}
		i = 0;
		while (i < space) {
			map[line][col] = ' ';
			col++;
			i++;
		}
		map[line][col] = '\0';
		line++;
		index++;
		max = max + 2;
	}
	map[line] = NULL;
	return (map);
}
