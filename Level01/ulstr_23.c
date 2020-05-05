/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : ulstr_23.c

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

* Creation Date : 04-05-2020

* Last Modified :

* Created By : Jarrod Donovan Hatting 
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

void (char *str)
{
    int i = 0;
    char c;

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            c = str[i] + ('a' - 'A');
            else if (str[i] >= 'a' && str[i] <= 'z')
                c = str[i] - ('a' - 'A');
                else 
               
