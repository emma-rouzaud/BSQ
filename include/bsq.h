/*
** EPITECH PROJECT, 2017
** bsq.h
** File description:
** bsq
*/

#ifndef _BSQ_H_
#define _BSQ_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

typedef struct map_s {
	int coord;
	int size;
	char *str;
} map_t;

int my_getnbr(char *);
void get_count(char *, int *);
char *fs_cat_x_bytes(int, int);
void bsq(char *filepath, long int i);
void check_map(char *str, int nb_col);
int my_strlen(char const *);
void print_map(map_t *square, int nb_col);
void display_map(char *map);

#endif
