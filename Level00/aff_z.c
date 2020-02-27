/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_z.c

* Purpose : Takes a string ,and displays the first 'z' character it encounters in it , followed by a new line. If there is no 'z' character in the string , the program writes 'z' followed by a newline. If the number of parameters is not 1, the program displays a 'z' followed by a new line.

* Creation Date : 27-02-2020

* Last Modified : Thu Feb 27 14:28:39 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

int main (int argc, char *argv[])
{
    int i = 0;

    if(argc != 2)
        write(1, "z\n", 2);
        else
        {
            while(argv[1][i])
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
        return (0);
}
