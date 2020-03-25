/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_last_param_5.c

* Purpose :Assignment name  : aff_last_param
Expected files   : aff_last_param.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes strings as arguments, and displays its last
argument followed by a newline.

If the number of arguments is less than 1, the program displays a newline.

Examples:

$> ./aff_last_param "Zelda" "is" "a" "boy" | cat -e
boy$
$> ./aff_last_param "I read this on internet !" | cat -e
I read this on internet !$
$> ./aff_last_param | cat -e
$

* Creation Date : 24-03-2020

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 1;

    while (str[i] != '\0')
        i++;
        return(i);
}

int main(int argc, int *argv[])
{
    if (argc >=2)
        write(1, argv[arc - 1], ft_strlen(argv[1]));
        write(1, "\n", 1);
        return(0);
}
