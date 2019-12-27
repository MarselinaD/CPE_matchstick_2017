/*
** EPITECH PROJECT, 2018
** game
** File description:
** coding
*/

#include "include.h"

int	end_of_game(map_t *map)
{
	int	line = 0;
	int	col;

	while (map->map[line] != NULL) {
		col = 0;
		while (map->map[line][col] != '\0') {
			if (map->map[line][col] == '|')
				return (0);
			col++;
		}
		line++;
	}
	return (1);
}

int	play_game(map_t *map)
{
	int	i;

	i = 1;
	while (!end_of_game(map)) {
		if (my_turn(map) == -1)
			return (0);
		if (!end_of_game(map))
			display_AI_move(map);
		else
			i = 2;
	}
	my_putstr(i == 1 ? "I lost... snif... but I'll get you next time!!\n"
		: "You lost, too bad...\n");
	return (i);
}
