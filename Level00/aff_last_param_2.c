/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_last_param_2.c

* Purpose :Takes strings as arguments, and displays its last arguments followed by a newline.

if the number of arguments is less than 1, the program displays a newline.

* Creation Date : 29-02-2020

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

int main(int argc, char *argv[])
{
    int i = 0;

    if (argc >= 1)
        while (argv[1][i])
        {
            write(1, &argv[argc - 1][i++],1);
        }
        write(1, "\n", 1);
    return(0);
}
