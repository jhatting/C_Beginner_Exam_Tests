/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : hello.c

* Purpose :Write a program that displays "Hello Word" followed by a newline/

* Creation Date : 02-03-2020

* Last Modified : Mon Mar  2 13:18:29 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

int main(void)
{
    write(1, "Hello World\n", 12);
    return(0);
}
