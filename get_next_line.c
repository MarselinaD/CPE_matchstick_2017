/*
** EPITECH PROJECT, 2018
** getnextline
** File description:
** coding
*/

#include "include.h"
#include <string.h>

char	*get_next_line(int fd)
{
	int	i = 0;
	int	len = 0;
	char	*res = NULL;
	char	ch = 0;

	len = 1;
	if (fd == -1)
		return (NULL);	
	res = malloc(sizeof(res) * 2);
	len = read(fd, &ch, 1);
	if (len <= 0)
		return (NULL);
	while (ch != '\n' && ch != '\0') {
		res[i++] = ch;
		(len = read(fd, &ch, 1)) <= 0 ? res : \
			(res = rb_realloc_str(res, my_strlen(res) + 1));
	}
	res[i] = '\0';
	return (res);
}

int	main(int ac, char **av)
{
	map_t	*map = NULL;

	map = malloc(sizeof(map_t));
	if (ac != 3 || str_isnum(av[1]) || str_isnum(av[2]) || \
		my_getnbr(av[1]) <= 1 || my_getnbr(av[1]) > 100 || \
		my_getnbr(av[2]) <= 0) {
		write(1, "Error parameters!\n", 18);
		return (84);
	}
	else {
		map->size = my_getnbr(av[1]);
		map->matches = my_getnbr(av[2]);
		map->map = mymap(map->size);
		display(map);
		return (play_game(map));
	}
	return (0);
}
