/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : maf_alpha.c

* Purpose : Write a program that displays the alphabet, with even letters in uppercase ,and odd letters in lowercase, followed by a newline.

* Creation Date : 02-03-2020

* Last Modified : Mon Mar  2 13:15:26 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

int main(void)
{
    write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
    return(0);
}
