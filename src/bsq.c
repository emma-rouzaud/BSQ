/*
** EPITECH PROJECT, 2017
** bsq.c
** File description:
** bsq
*/

#include "../include/bsq.h"

int find_col_nb(char *str)
{
	int i = 0;

	while (str[i] != '\n')
		i++;
	return (i);
}

void bsq(char *filepath, long int size)
{
	int fd;
	char *map;
	int count = 0;
	int col_nb;

	get_count(filepath, &count);
	fd = open(filepath, O_RDONLY);
	if (fd == -1)
		exit(84);
	map = fs_cat_x_bytes(fd, size);
	map += count + 1;
	close(fd);
	col_nb = find_col_nb(map);
	check_map(map, col_nb);
	map -= count + 1;
	free (map);
}

void get_count(char *filepath, int *count)
{
	int fd = open(filepath, O_RDONLY);
	char str[5];
	int i = read(fd, str, 1);

	if (fd == -1)
		exit(84);
	while (i == 1 && str[0] != '\n') {
		i = read(fd, str, 1);
		*count += 1;
	}
	close(fd);
}

char *fs_cat_x_bytes(int fd, int x)
{
	char	*str = malloc(sizeof(char) * x + 1);

	if (str == NULL)
		return (NULL);
	str[x] = '\0';
	if (!(read(fd, str, x)))
		return (NULL);
	return (str);
}
