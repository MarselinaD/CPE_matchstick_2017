/*
** EPITECH PROJECT, 2018
** player
** File description:
** coding
*/

#include "include.h"

void	what_i_removed(int matches, int line)
{
	my_putstr("Player removed ");
	my_put_nbr(matches);
	my_putstr(" match(es) from line ");
	my_put_nbr(line);
	my_putchar('\n');
}

void	remove_display(map_t *map, int line, int stick)
{
	remove_matches(map, line, stick);
	what_i_removed(stick, line);
	display(map);
}

int	my_turn(map_t *map)
{
	char	*a;
	int	i = 0;
	int	s = 0;

	my_putstr("\nYour turn:\n");
	while (i <= 0 || s <= 0) {
		my_putstr("Line: ");
		if ((a = get_next_line(0)) == NULL)
			return (-1);
		i = my_getnbr(a);
		if (check(a, i, map) == 0) {
			my_putstr("Matches: ");
			a = get_next_line(0);
			if (a == NULL)
				return (-1);
			s = check_m(a, map, (s = my_getnbr(a)), i) == 1 ? 0 : s;
		}
	}
	remove_display(map, i, s);
	return (0);
}
