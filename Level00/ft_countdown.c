/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : ft_countdown.c

* Purpose : displays all digits in descending order, followed by a newline.

* Creation Date : 02-03-2020

* Last Modified : Mon Mar  2 13:31:32 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

int main(void)
{
    write(1, "9876543210\n", 11);
    return(0);
}
