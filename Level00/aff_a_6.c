/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_a_6.c

* Purpose : takes a string , and displays the first 'a' character it encounters in it , followed by a newline, if the number of parameters is not 1, the program displays 'a' followed by a newline.

* Creation Date : 09-03-2020

* Last Modified : Mon Mar  9 10:32:57 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

void aff_a(char *str)
{
    while(*str != '\0')
    {
        if (*str == 'a')
        {
            write(1, "a", 1);
            break;
        }
        ++str;
    }
    write(1, "\n", 1);
}

int main (int argc, char *argv[])
{
    if (argc == 2)
        aff_a(argv[1]);
        else
            write(1, "a\n", 2);

            return (0);
}
