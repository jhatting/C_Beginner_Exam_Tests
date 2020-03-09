/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_a_8.c

* Purpose :takes a string . and displays the first 'a' characters it encounters in it, followed by a newline. If there are no 'a' characters in the string . the program just writes a newline. If the number of parameters is not 1, the program displays "a' followed by a newline.

* Creation Date : 09-03-2020

* Last Modified : Mon Mar  9 11:32:01 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

void aff_a(char *str)
{
    if (*str != '\0')
    {
        while (*str == 'a')
        {
            write(1, "a",1);
            break;
        }
        str++;
    }
    write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        aff_a(argv[1]);
        else
            write(1, "a\n", 1);

        return(0);
}
