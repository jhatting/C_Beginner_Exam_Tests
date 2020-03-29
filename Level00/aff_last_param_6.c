/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_last_param_6.c

* Purpose :

* Creation Date : 29-03-2020

* Last Modified : Sun Mar 29 09:26:01 2020

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

int main(int argc, char *argv[])
{
    if (argc >= 2)
        write(1, argv[argc - 1], ft_strlen(argv[argc - 1]));
        write(1, "\n", 1);
        return(0);
}

