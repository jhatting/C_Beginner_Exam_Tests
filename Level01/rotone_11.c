/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : rotone_11.c

* Purpose :

Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.

Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>

* Creation Date : 25-04-2020

* Last Modified :

* Created By : Jarrod Donovan Hatting 
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

void rotone (char *str)
{
    while (*str != '\0')
    {
        if (*str == 'Z' || *str == 'z')
            *str = *str - ('z' - 'a');
            else if ((*str >= 'a' && *str <= 'y') || (*str >= 'A' && *str <= 'Y'))
                *str = *str + 1; 

                write(1, str, 1);
                str++;
    }
}

int main (int argc, char *argv[])
{
    if (argc == 2)
        rotone(argv[1]);
        write(1, "\n", 1);
        return(0);
}
