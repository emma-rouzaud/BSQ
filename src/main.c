/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** bsq
*/

#include "../include/bsq.h"
#include <unistd.h>
#include <sys/stat.h>

int main(int ac, char **av)
{
	struct stat buff;
	int error_no;

	if (ac != 2)
		return (84);
	error_no = stat(av[1], &buff);
	if (error_no == -1)
		exit (84);
	bsq(av[1], buff.st_size);
	return (0);
}
