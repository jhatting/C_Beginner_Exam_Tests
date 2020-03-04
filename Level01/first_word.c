/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : first_word.c

* Purpose : takes a string and displays its first word, followed by a newline.
the word is a section of string and delimited by spaces/tabs or by the start/end of the string.
If the number of parameters is not 1, or if there are no words, simply display a newline
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

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

void first_word(char *str)
{
    while (*str == ' ' || *str == '\t')
        ++str;
        while (*str != '\0' && *str != ' ' && *str != '\t')
        {
            write(1, str, 1);
            ++str;
        }
}

int main(int argc, char **argv)
{
    if(argc == 2)
        first_word(argv[1]);

     write(1, "\n", 1);
     return(0);
}
