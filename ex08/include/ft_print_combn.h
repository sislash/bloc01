/******************************************************************************/
/*                                                                            */
/* ft_print_combn.h                                                           */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/11 17:34:48 by Xavier.Megnoux                             */
/* Updated: 2025/05/19 23:09:30 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/
#ifndef FT_PRINT_COMBN_H

#define FT_PRINT_COMBN_H

#include <unistd.h>

/*Prototype*/
void ft_putchar(char c);
void ft_print_combn(int n);
void init(int *comb, int n);
void affichage(int *comb, int n);
void next_comb(int *comb, int n);

#endif /*__FT_PRINT_COMBN_H__*/

