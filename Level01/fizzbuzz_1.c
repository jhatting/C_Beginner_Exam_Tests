/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : fizzbuzz_1.c

* Purpose :prints the number from 1 to 100, each separated \n.
if the number is a multiple of 3 , it prints 'fizz',
    if the number is a multiple of 5, it prints "buzz".
        if the number is a multiple of 3 and 5 it prints 'fizzbuzz'

* Creation Date : 29-02-2020

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

void ft_putnbr(int n);

int main(void)
{
    int i = 1;

    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz", 8);
           else if (i % 3 == 0)
               write(1, "fizz", 4);
               else if (i % 5 == 0)
                   write(1, "buzz", 4);
                   else
        ft_putnbr(i);
        ++i;
        write(1, "\n", 1);
    }
}

void ft_putnbr(int n)
{
    if (n >= 10)
        ft_putnbr(n / 10);
        char c = (n % 10) + '0';
        write (1, &c, 1);
}
