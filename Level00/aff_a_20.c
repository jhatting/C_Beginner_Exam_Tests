/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_a_20.c

* Purpose :

* Creation Date : 29-03-2020

* Last Modified : Mon Mar 30 10:07:20 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

void aff_a(char *str)
{
    if (*str != '\n')
    {
        while (*str =='a')
        {
            write(1, "a", 1);
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
