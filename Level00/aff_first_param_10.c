/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_first_param_10.c

* Purpose :

* Creation Date : 10-03-2020

* Last Modified : Fri Mar 13 22:39:36 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
        return(i);
}

int main (int argc, char *argv[])
{
    if (argc >= 2)
        write(1, argv[1], ft_strlen(argv[1]));
     write(1, "\n", 1);
     return(0);
     }
