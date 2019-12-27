/*
** EPITECH PROJECT, 2018
** strcpy
** File description:
** coding
*/

#include <unistd.h>
#include <stdio.h>

char	*rb_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	if (src != NULL && dest != NULL) {
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
