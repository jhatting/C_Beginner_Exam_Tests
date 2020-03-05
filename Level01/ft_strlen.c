/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : ft_strlen.c

* Purpose : a function that returns the length of a string. 
Your function must be declared as follows:
int ft_strlen(char *str);


* Creation Date : 05-03-2020

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

int ft_strlen(char *str);
{
    int i = 0;
    while (str[i] != '\0')
        ++i;
        return(i);
}
