/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_a_3.c

* Purpose : takes a string, and displays the first encounters in it, followed by a newline. If there are no 'a' characters in the string write a newline .if the numbers of parameters is not 1 the program displays 'a' followed by a newline.

* Creation Date : 29-02-2020

* Last Modified : Sat Feb 29 11:06:04 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

int main(int argc, char *argv[])
{
    int i = 0; 

    if (argc != 2)
        write(1, "a\n", 2);
        while (argv[1][i])
        {
            if(argv[1][i] != 'a')
                i++;
                else 
                {
                    write(1, "a", 1);
                    break;
                }
                write(1, "\n", 1);
        }
        return (0);

}
