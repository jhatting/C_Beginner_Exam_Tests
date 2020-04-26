/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : ulstr_18.c

* Purpose :

Assignment name  : ulstr
Expected files   : ulstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and reverses the case of all its letters.
Other characters remain unchanged.

You must display the result followed by a '\n'.

If the number of arguments is not 1, the program displays '\n'.

Examples :

$>./ulstr "PeTEr PIpeR pICKeD A PeCK of pIckLEd PEPPers." | cat -e
pEteR piPEr PickEd a pEck OF PiCKleD peppERS.$
$>./ulstr "A pEcK OF picKLED pePPErS PeTEr PIpeR picked.  " | cat -e
a PeCk of PICkled PEppeRs pEteR piPEr PICKED.  $
$>./ulstr | cat -e
$

* Creation Date : 26-04-2020

* Last Modified :

* Created By : Jarrod Donovan Hatting 
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

void ulstr(char *str)
{
    while (*str != '\0')
    {
        if (*str == 'Z' || *str == 'z')
            *str = *str - ('z' - 'a')
            else if ((*str >= 'a' && *str <= 'y') || (*str >= 'A' && *str <= 'Y'))
                *str = *str + 1;

                write(1, str, 1);
                str++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        ulstr(argv[1]);
        write(1, "\n", 1);
        return(0);
}
