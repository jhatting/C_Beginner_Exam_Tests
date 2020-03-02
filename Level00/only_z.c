/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : only_z.c

* Purpose : displays a 'z' character on the standard output.

* Creation Date : 02-03-2020

* Last Modified : Mon Mar  2 13:01:36 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

int main(void)
{
   write(1, "z", 1);
   return(0);
}
