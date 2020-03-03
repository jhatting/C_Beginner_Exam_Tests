/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_first_param_5.c

* Purpose : Takes strings as arguments, and displays its last argument followed by a  newline. If the number of arguments is less than 1 , the program displays a newline.

* Creation Date : 02-03-2020

* Last Modified : Mon Mar  2 18:35:15 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

void ft_putstr(char *str);

int main(int argc, char *argv[])
{
    if (argc > 1)
            ft_putstr(argv[1]);
            write(1, "\n", 1);
            return (0);
}

void ft_putstr(char *str)
{
    int i = 0;
    while(str[i] != '\0')
        i++;
        write(1, str, i);
        
}
