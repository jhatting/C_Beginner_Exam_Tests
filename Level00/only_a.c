/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : only_a.c

* Purpose : Displays a "a" character on the standard output.

* Creation Date : 02-03-2020

* Last Modified : Mon Mar  2 13:04:58 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

int main (void)
{
    write(1, "a", 1);
    return(0);
}
