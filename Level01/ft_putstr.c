/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : ft_putstr.c

* Purpose : displays a string on the standard output / 
The pointer passed to the function contains the address of the strings first character.

* Creation Date : 04-03-2020

* Last Modified : Thu Mar  5 12:03:41 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

void ft_putstr(char *str);

int main()
{
    char string[] = "This String";
   ft_putstr(string);
   return 0;
}

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        ++i;
        return (i);
}

void ft_putstr(char *str)
{
    write(1, str, ft_strlen(str));
}
