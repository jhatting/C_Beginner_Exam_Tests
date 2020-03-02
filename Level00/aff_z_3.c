/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_z_3.c

* Purpose : takes a string and displays the first 'z' character it encounters in it , followed newline

* Creation Date : 02-03-2020

* Last Modified : Mon Mar  2 14:13:13 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

int main (void)
{
    write(1, "z\n", 2);
    return(0);
}
