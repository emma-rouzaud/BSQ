/*
** EPITECH PROJECT, 2017
** test2.c
** File description:
** bsq
*/

#include <criterion/criterion.h>
#include "../include/bsq.h"
int find_col_nb(char *str);

Test(bsq, nb_col)
{
	cr_assert_eq(find_col_nb("....................\n"), 20);
}

Test(bsq, nb_col2)
{
	cr_assert_eq(find_col_nb(".\n"), 1);
}

Test(bsq, count)
{
	int count = 0;

	get_count("tests/maps/small_map", &count);
	cr_assert_eq(count, 2);
}

Test(bsq, count2)
{
	int count = 0;

	get_count("tests/maps/intermediate_map_34_137_with_\
obstacles_25pc", &count);
	cr_assert_eq(count, 3);
}
