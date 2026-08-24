#include "c00.h"

void ft_print_alphabet()
{
    char c;
    c = 'a';
    while (c < 'z')
    {
        write(1, &c, 1);
        c++;
    }
}