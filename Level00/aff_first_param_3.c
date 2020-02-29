/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_first_param_3.c

* Purpose : Takes a program that takes strings as arguments , and displays its first argument followed by a \n.
if the number of arguments is less than 1, the program displays /n

* Creation Date : 29-02-2020

* Last Modified : Sat Feb 29 11:28:01 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

int main(int argc, char *argv[])
{
    int i = 0;

    if (argc != 2)
    {
        while (argv[1][i])
            write(1, &argv[1][i++], 1);
    }
    write(1,"\n",1);
    return(0);
}
