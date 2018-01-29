/*
** EPITECH PROJECT, 2017
** check_tab.c
** File description:
** bsq
*/

#include "../include/bsq.h"

void find_square(int *map, map_t *square, int nb_col, int size)
{
	int min = 0;
	int i = nb_col + 2;

	while (i < size){
		min = map[i - 1];
		min = (min > map[i - nb_col - 1]) ? map[i - nb_col - 1] : min;
		min = (min > map[i - nb_col - 2]) ? map[i - nb_col - 2] : min;
		map[i] = (map[i] != 0) ? min + 1 : 0;
		if (min + 1 > square->size && map[i] > 1) {
			square->size = min + 1;
			square->coord = i;
			print_map(square, nb_col);
		}
		i++;
	}
}

void find_first_square(char *map, map_t *square, int size)
{
	int i = 0;

	while (map[i] != '.' && i != size)
		i++;
	if (i != size) {
		square->size = 1;
		square->coord = i;
	}
}

int *duplicate_map(int *map, char *str)
{
	int i = 0;

	while (str[i] != '\0'){
		if (str[i] == '.')
			map[i] = 1;
		else if (str[i] == 'o' || str[i] == '\n')
			map[i] = 0;
		i++;
	}
	return (map);
}

void check_map(char *str, int nb_col)
{
	map_t square;
	int *map = malloc(sizeof(int) * (my_strlen(str) + 1));

	square.size = 0;
	square.coord = 0;
	square.str = str;
	map = duplicate_map(map, str);
	find_first_square(str, &square, my_strlen(str));
	find_square(map, &square, nb_col, my_strlen(str));
	display_map(square.str);
	free(map);
}
