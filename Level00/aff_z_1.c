/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_z_1.c

* Purpose :takes a string , and displays the first 'a' character it encounters in it , followed by a newline , If there are no 'a' characters in the string, the program just writes a newline . if the number of parameter is not 1 , the program displays 'a' followed by a newline.

* Creation Date : 27-02-2020

* Last Modified : Thu Feb 27 18:38:48 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

int main (int argc, char *argv[])
{
    int i = 0;

    if (argc != 2)
        write(1, "z\n", 1);
        else 
        {
            while (argv[1][i])
                {
                    if (argv[1][i] != 'z')
                        i++;
                        else 
                        {
                            write(1, "z", 1);
                            break;
                        }
                }
                write(1, "\n", 1);
        }
        return(0);
}
