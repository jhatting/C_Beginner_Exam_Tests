/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_first_param.c

* Purpose : Takes  strings as arguments, and displays its first argument followed by a newline.

* Creation Date : 27-02-2020

* Last Modified : Mon Mar  9 19:19:27 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
        write(1, &str[i++], 1);
}

int main (int argc, char *argv[])
{
    int i = 0;

    if (argc == 2)
        ft_putstr(argv[1]);
    write(1, "\n",1);
    return (0);
}
