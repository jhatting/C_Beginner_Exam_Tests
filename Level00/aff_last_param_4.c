/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_last_param_4.c

* Purpose :

* Creation Date : 10-03-2020

* Last Modified : Tue Mar 10 08:36:52 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
        write(1, str, i);
}

int main (int argc, char *argv[])
{
    if (argc > 1)
        ft_putstr(argv[argc - 1]);
        write(1, "\n", 1);
        return(0);
}
