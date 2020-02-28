/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_z_2.c

* Purpose : Take a string and displays the first 'z' character it encounters , followed by a newline . If there are no 'z;' characters in the string the program writes a new line , if the number of parameters is not 1 , the program displays z followed by a newline.

* Creation Date : 28-02-2020

* Last Modified : Fri Feb 28 09:09:42 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

int main(int argc, char *argv[])
{
    int i = 0;

    if (argc != 2)
        write(1, "z\n",2);
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
