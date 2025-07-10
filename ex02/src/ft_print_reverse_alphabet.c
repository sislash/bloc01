/******************************************************************************/
/*                                                                            */
/* ft_print_reverse_alphabet.c                                                */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/07 15:48:45 by Xavier.Megnoux                             */
/* Updated: 2025/07/02 11:28:34 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/
#include "../include/ft_print_reverse_alphabet.h"

void ft_print_reverse_alphabet(void)
{
    char lettre=122;

    while(lettre>=97)
    {
        write(1, &lettre, 1);
        lettre--;
    }
}
