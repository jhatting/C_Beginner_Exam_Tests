/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_first_param_11.c

* Purpose : Write a program that takes strings as arguments, and displays its first
argument followed by a \n.

If the number of arguments is less than 1, the program displays \n.

Example:

$> ./aff_first_param it is at this moment jackson knew | cat -e
it$
$> ./aff_first_param "I bet you can't print me" | cat -e
I bet you can't print me$
$> ./aff_first_param | cat -e
$

* Creation Date : 13-03-2020

* Last Modified : Fri Mar 13 22:15:58 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

int ft_putstr(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    i++;
    return(i);
}

int main(int argc, char *argv[])
{
    if (argc <= 2)
    while (argv[1])
        write(1, argv[1], ft_putstr(argv[1]));
        write(1, "\n", 1);
        return(0);
}

