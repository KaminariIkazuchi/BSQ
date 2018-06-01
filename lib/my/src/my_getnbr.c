/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** My GetNbr
*/

int my_getnbr(char const *str)
{
	int i = 0;
	int n = 0;

	while (str[i] != '\0') {
		n = n + str[i] - 48;
		n = n * 10;
		i++;
	}
	n /= 10;
	return (n);
}