/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_a_4.c

* Purpose: takes a string and displays the first 'a' character it encounters in it, followed by a new line . If there is no "a" character the program writes a newline . If the number of parameters is not 1, the program displays "a" followed by a newline.

* Creation Date : 29-02-2020

* Last Modified : Sat Feb 29 11:20:30 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

int main(int argc, char *argv[])
{
    int i = 0;

    if(argc != 2)
    
        write(1, "a\n", 2);
        else 
        {
            while(argv[1][i])
            {
                if (argv[1][i] != 'a')
                i++;
                else 
                {
                    write(1, "a", 1);
                    break;
                }
            }
            write(1, "\n",1);
        }
        return(0);
}
