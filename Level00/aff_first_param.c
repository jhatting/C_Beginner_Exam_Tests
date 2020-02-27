/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_first_param.c

* Purpose : Takes  strings as arguments, and displays its first argument followed by a newline.

* Creation Date : 27-02-2020

* Last Modified : Thu Feb 27 10:25:51 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

int main (int argc, char *argv[])
{
    int i = 0;

    if (argc >= 1)
    {
        while(argv[1][i])
            write(1, &argv[1][i++],1);
    }
    write(1, "\n",1);
    return (0);
}
