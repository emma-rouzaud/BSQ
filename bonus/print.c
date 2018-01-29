/*
** EPITECH PROJECT, 2017
** print.c
** File description:
** bsq
*/

#include <stdio.h>
#include "../include/bsq.h"

void display_map(char *map)
{
	int i = 0;

	while (map[i] != '\0'){
		if (map[i] == 'x') {
			write(1, "\033[34m", 6);
			write(1, &map[i], 1);
			write(1, "\033[0m", 6);
		}
		else
			write(1, &map[i], 1);
		i++;
	}
}

void print_map(map_t *square, int nb_col)
{
	int count_len = 0;
	int count_wid = 0;
	int i = square->coord;

	while (count_len < square->size && i >= 0) {
		while (count_wid < square->size) {
			square->str[i] = 'x';
			i--;
			count_wid++;
		}
		i = i - (nb_col + 1 - square->size);
		count_wid = 0;
		count_len++;
	}
}
