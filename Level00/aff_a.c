/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : aff_a.c

* Purpose : takes strings and displays the first 'a' character it encounters in it, followed by a newline. If no 'a' characters in the string , the program just writes a newline. if the number of parameters is not 1, the program 'a' 

* Creation Date : 27-02-2020

* Last Modified : Thu Feb 27 12:10:59 2020

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
                if (argv[1][i] != 'a')
                    i++;
                    else 
                    {
                        write(1, "a", 1); 
                        break;
                    }
                    write(1, "\n", 1);
            }
        }
        return (0);
}
