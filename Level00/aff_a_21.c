/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_a_21.c

* Purpose :

* Creation Date : 30-03-2020

* Last Modified : Mon Mar 30 10:11:04 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

void aff_a(char *str)
{
    if (*str != '\0')
    {
        while (*str == 'a')
        {
            write(1, "a", 1);
            break;
        }
        str++;
    }
    write(1, "\n", 1);
}

int main(int argc, char *argv[]);
{
    if (argc == 2)
    aff_a(argv[1]);
    else
        write(1, "a\n", 1);
        return(0);
}
