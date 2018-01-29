/*
** EPITECH PROJECT, 2017
** test.c
** File description:
** bsq
*/

#include <criterion/criterion.h>
#include "../include/bsq.h"
#include <unistd.h>
#include <sys/stat.h>
void find_first_square(char *map, map_t *square, int size);

Test(bsq, first_square)
{
	map_t square;

	find_first_square(".....o.....", &square, 11);
	cr_assert_eq(square.size, 1);
	cr_assert_eq(square.coord, 0);

}

Test(bsq, first_square2)
{
	map_t square;

	find_first_square("ooooooooo.o", &square, 11);
	cr_assert_eq(square.size, 1);
	cr_assert_eq(square.coord, 9);
}

Test(bsq, first_square3)
{
	map_t square;

	square.size = 0;
	square.coord = 0;
	find_first_square("ooooooooooo", &square, 11);
	cr_assert_eq(square.size, 0);
	cr_assert_eq(square.coord, 0);
}

Test(bsq, first_square4)
{
	map_t square;

	square.size = 0;
	square.coord = 0;
	find_first_square("oooooooooooooooo\noooooooooooooooo\n\
oooooooooooooooo\noooooooooooooooo\noooooooooooooooo\n\
oooooooooooooooo\noooooooooooooooo\noooooooooooooooo\n", &square, 11);
	cr_assert_eq(square.size, 0);
	cr_assert_eq(square.coord, 0);
}
