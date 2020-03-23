/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_a_16.c

* Purpose :
Assignment name  : aff_a
Expected files   : aff_a.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the first 'a' character it
encounters in it, followed by a newline. If there are no 'a' characters in the
string, the program just writes a newline. If the number of parameters is not
1, the program displays 'a' followed by a newline.

Example:

$> ./aff_a "abc" | cat -e
a$
$> ./aff_a "RaInB0w d4Sh!" | cat -e
a$
$> ./aff_a "ThE Ck3 Is L|3" | cat -e
$
$> ./aff_a | cat -e
a$

* Creation Date : 23-03-2020

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

void aff_a(char *str)
{
    while(str != '\0')
    {
        write(1, "a", 1);
        break;
    }
    str++;
    write(1, "\n",1);
}

int main(int argc, char *argv[])
{
    int i = 0;

    if (argc >= 2)
    aff_a(argv[i]);
    else
        write(1, "a\n", 2);
        return(0);
}
