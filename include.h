/*
** EPITECH PROJECT, 2017
** include
** File description:
** coding
*/

#ifndef INCLUDE_H_
#define INCLUDE_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef	struct	map {
	int	size;
	int	matches;
	char	**map;
}		map_t;

char	*rb_strcpy(char *dest, char *src);
void	rb_free(void *str);
int	my_strlen(char *str);
char	*rb_realloc_str(char *str, int size);
void	my_putstr(char *str);
void	my_putchar(char r);
char	**mymap(int size);
int	my_getnbr(char *str);
void	display(map_t *map);
void	display_line(map_t *map);
int	play_game(map_t *map);
int	end_of_game(map_t *map);
char	*get_next_line(int fd);
void	remove_matches(map_t *map, int size, int line);
int	str_isnum(char *str);
void	display_AI_move(map_t *map);
int	my_turn(map_t *map);
int	my_put_nbr(int nb);
int	check(char *av, int line, map_t *map);
int	check_m(char *av, map_t *map, int matches, int line);
int	count_pipe(map_t *map, int line);

#endif
