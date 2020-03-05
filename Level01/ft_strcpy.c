/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : ft_strcpy.c

* Purpose : functions copy the string src to dst, including the terminating '\0' character:

Function must be declared as follows:

char *ft_strcpy(char *s1, char *s2);

* Creation Date : 05-03-2020

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
    int i = 0;
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] ='\0';
    return(s1);
}

int main()
{
    char str1 [] = "helle";
    char str [] = "Sam";

    ft_strcpy(str1, str);
    printf("%s = str1 = helle and %s = str = Sam " , str1, str);
    return(0);
}
