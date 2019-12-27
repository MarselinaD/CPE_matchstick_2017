/*
** EPITECH PROJECT, 2018
** pc
** File description:
** coding
*/

#include "include.h"

void	display_move(int matches, int line)
{
	my_putstr("AI removed ");
	my_put_nbr(matches);
	my_putstr(" match(es) from line ");
	my_put_nbr(line);
	my_putchar('\n');
}

void	remove_and_display(map_t *map, int line, int stick)
{
	remove_matches(map, line, stick);
	display_move(stick, line);
	display(map);
}

void	display_AI_move(map_t *map)
{
	int	line = 0;
	int	stick = 0;
	int	rem_stick = 0;

	line = (random() + 1) % (map->size + 1);
	if (line > 0) {
		rem_stick = count_pipe(map, line - 1);
		if (line > 0 && line <= map->size && rem_stick > 0) {
			my_putstr("\nAI's turn...\n");
			stick = random() % rem_stick + 1;
			if (stick > map->matches) {
				if (rem_stick > map->matches)
					stick = rem_stick - map->matches;
				else if (rem_stick <= map->matches)
					stick = rem_stick;
			}
			remove_and_display(map, line, stick);
		}
		else
			display_AI_move(map);
	}
	else
		display_AI_move(map);
}
