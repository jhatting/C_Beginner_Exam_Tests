/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : rev_print_4.c

* Purpose :

Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "rainbow dash" | cat -e
hsad wobniar$
$> ./rev_print "Ponies are awesome" | cat -e
emosewa era seinoP$
$> ./rev_print | cat -e
$

* Creation Date : 01-05-2020

* Last Modified :

* Created By : Jarrod Donovan Hatting 
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

void rev_print (char *str){
    int i  = 0;

    while (str[i] != '\0')
        ++i;
     --i;
     while (i >= 0)
     {
         write(1, str
