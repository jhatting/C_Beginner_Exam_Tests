/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_a_1.c

* Purpose :Takes a string and displays the first :"a": it encounters followed \n . If there is no "a" characters in the strings , writes only \n.
If the number of parameters is not 1, the program displays "a\n" 

* Creation Date : 27-02-2020

* Last Modified : Sat Feb 29 10:00:59 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

int main(int argc, char *argv[])
{
    int i = 0;
    
    if(argc != 2)
        write(1, "a\n", 1);
        else
        {
            while (argv[1][i])
            {
                if (argv[1][i] != 'a')
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
