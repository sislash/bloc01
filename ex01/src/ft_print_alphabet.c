/******************************************************************************/
/*                                                                            */
/* ft_print_alphabet.c                                                        */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/06 23:05:06 by Xavier.Megnoux                             */
/* Updated: 2025/05/07 15:47:57 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/
#include "../include/ft_print_alphabet.h"

void ft_print_alphabet(void)
{
    char lettre= 97;
    while(lettre<123)
    {
        write(1, &lettre, 1);
        lettre++;
    }
}
