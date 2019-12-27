/*
** EPITECH PROJECT, 2018
** strlen
** File description:
** coding
*/

#include <unistd.h>
#include <stdio.h>

int	my_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
