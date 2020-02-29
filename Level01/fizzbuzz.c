/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : fizzbuzz.c

*   Assignment name  : fizzbuzz
    Expected files   : fizzbuzz.c
    Allowed functions: write
--------------------------------------------------------------------------------

Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

Example:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$>

* Creation Date : 28-02-2020

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

void ft_putnbr(int n)
{
    if (n >= 10 )
        ft_putnbr(n /10);
        char c = (n % 10) + '0';
        write(1, &c , 1);
}

int main (void)
{
    int i = 1;

    ft_putnbr(i);
    write(1, "\n", 1);
}
