/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_last_param_4.c

* Purpose :

* Creation Date : 10-03-2020

* Last Modified : Tue Mar 10 08:28:16 2020

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
        ft_putstr(argv[argc-1]);
    write(1, "\n",1);
    return (0);
}
