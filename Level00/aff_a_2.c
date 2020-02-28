/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_a_2.c

* Purpose : takes a string and displays the first 'a' character it encounters in it ,followed by a newline , If there are no 'a' characters in the string the program , just write a newline . If the parameter is not 1 the program displays "a" followed by a newline.

* Creation Date : 28-02-2020

* Last Modified : Fri Feb 28 08:55:27 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

int main(int argc, char *argv[])
{
    int i = 0;

    if (argc != 2)
        write(1, "a\n", 2);
        else 
        {
            while (argv[1][i])
                {
                    if(argv[1][i] != 'a')
                        i++;
                        else
                        {
                            write(1, "a", 1);
                            break;
                        }
                }
                write(1, "\n", 1);
        }
        return (0);
}
