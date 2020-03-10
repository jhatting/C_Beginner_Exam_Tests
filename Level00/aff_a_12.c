/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_a_12.c

* Purpose : Test

* Creation Date : 10-03-2020

* Last Modified : Tue Mar 10 15:50:01 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

void	aff_a(char *str)
{
	while (*str != '\0')
	{
		if (*str == 'a')
		{
			write(1, "a", 1);
			break;
		}
		++str;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		aff_a(argv[1]);
	else
		write(1, "a\n", 2);

	return (0);
}
