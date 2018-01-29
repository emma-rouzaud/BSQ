/*
** EPITECH PROJECT, 2017
** my_getnbr.c
** File description:
** lib
*/

int get_value(char const *str, int i)
{
	int nb = 0;

	while (str[i] <= '9' && str[i] >= '0') {
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (nb);
}

int my_getnbr(char *str)
{
	int nb = 0;
	int sign = 0;
	int i = 0;

	while (str[i] != '\0' && nb == 0) {
		if (str[i] == '-')
			sign++;
		if (str[i] >= '0' && str[i] <= '9')
			nb = get_value(str, i);
		i++;
	}
	if (sign % 2 == 1)
		nb = -nb;
	return (nb);
}
