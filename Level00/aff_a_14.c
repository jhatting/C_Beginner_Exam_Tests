/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_a_14.c

* Purpose: Takes strings and displays the first 'a' character it encounters in it, followed by a newline. If no 'a' characters in the string , the program just writes a newline. if the number of parameters is not 1, the program 'a'

* Creation Date : 13-03-2020

* Last Modified : Fri Mar 13 21:37:26 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

int aff_a(char *str)
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
    return(0);
}

int main(int argc, char *argv[])
{
    if (argc >=2)
        aff_a(argv[1]);
        else
            write(1, "a\n",2);
            return(0);
}
