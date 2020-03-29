/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : ft_swap.c

* Purpose : function that swaps the contents of two intergers the addresses of which are passed as parameters.

function must be declared as follows:

void ft_swap(int *a, int *b);

* Creation Date : 06-03-2020

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>
#include <stdio.h>

void ft_swap(char *a, char *b)
{
    int swap = *a;
    *a = *b;
    *b = swap;
}

int main()
{
    char str1 [] = "Jarrod";
    char str2 [] = "sam";

    ft_swap(str1, str2);
    
    printf("str1 = %s, str2 = %s", str1, str2);

}


