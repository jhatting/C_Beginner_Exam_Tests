/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_last_param_1.c

* Purpose : takes strings as arguments , and displays the last argument followed by a newline .

* Creation Date : 27-02-2020

* Last Modified : Thu Feb 27 10:37:39 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

int main (int argc, char *argv[])
{
    int i = 0;

    if (argc >= 1 )
    {
        while (argv[1][i])
            write(1, &argv[argc -1][i++], 1);
    }
    write(1, "\n", 1);
    return (0);
}
