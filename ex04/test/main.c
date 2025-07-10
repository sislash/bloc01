/******************************************************************************/
/*                                                                            */
/* test_is_negtive.c                                                          */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/08 17:37:47 by Xavier.Megnoux                             */
/* Updated: 2025/05/08 18:29:48 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/
#include "../include/ft_is_negative.h"

void ft_is_negative(int n);

int main(void)
{
	ft_is_negative(-1); /*Devrait afficher N*/
	write(1,"\n", 1);
	ft_is_negative(0); /*Devrait afficher P*/
	write(1, "\n", 1);
	ft_is_negative(83); /*Devrait afficher P*/
	write(1, "\n", 1);
	return 0;
}
