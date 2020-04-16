/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : first_word_15.c

* Purpose :
Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>


* Creation Date : 15-04-2020

* Last Modified :

* Created By :  

_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

void first_word(char *str)
{
    while (*str != '\0')
    {
        if (*str == ' ' && *str == '\t')
            str++;
            else if (*str != ' ' && *str != '\0' && *str != '\t')
                {
                    write(1, str, 1);
                    str++;
                }
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        first_word(argv[1]);
       write(1, "\n", 1);
       reutrn(0);
}
