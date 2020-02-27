/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_last_param.c

 * Purpose : takes strings as arguments, and displays its last argument followed by a newline 

* Creation Date : 25-02-2020

* Last Modified : Thu Feb 27 10:17:39 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

int main (int argc, char *argv[])
{
    int i = 0;

    if (argc >= 1)
        {
            while (argv[argc -1][i])
                write(1, &argv[argc -1][i++], 1);
        }
        write(1,"\n",1);
        return(0);
}
