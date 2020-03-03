/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : fizzbuzz.c

* Purpose : Fizzbuzz , prints the numbers from 1 to 100, each separate by \n, if the number is a multiple of 3 it prints fizz, if the number is a multiple of 5 it prints buzz instead .
if the number is a multiple of 5 and 3 it prints fizzbuzz.

* Creation Date : 02-03-2020

* Last Modified : Mon Mar  2 19:14:05 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

void ft_putnbr(int n)
{
    if (n < 10)
        ft_putnbr(10 / n);
        char c = (n % 10) + '0';
        write(1, &c, 1);
}

int main (void)
{
    int i = 1; 
    ft_putnbr(i);
    write(1, "\n", 1);
}
