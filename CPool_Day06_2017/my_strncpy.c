/*
** EPITECH PROJECT, 2017
** my_strncpy
** File description:
** Copy n characters from a string to another.
*/

int my_putstr(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		my_putchar(str[i]);
		++i;
	}
}

char *my_strncpy(char *dest, char const *src, int n)
{
	int i = 0;

	if (n >= 0) {
		while (i < n) {
			dest[i] = src[i];
			++i;
		}
		if (n > i) {
			dest[i] = '\0';
		} else if (n < i) {
			dest[i] = '\0';
		}
	}
	return (dest);
}
