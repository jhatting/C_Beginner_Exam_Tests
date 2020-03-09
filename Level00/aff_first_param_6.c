/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_first_param_6.c

* Purpose : takes strings as arguments , and displays its first argument followed by a \n
if the numeber of arguments is less than 1 . the program displays \n.

* Creation Date : 09-03-2020

* Last Modified : Mon Mar  9 12:59:37 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        ++i; 
        return(i);
}

int main(int argc, char *argv[])
{
    if (argc >= 2)
        write(1, argv[1], ft_strlen(argv[1]));
        write(1, "\n", 1);
        return(0);
}
