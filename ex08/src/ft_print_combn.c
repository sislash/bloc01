/******************************************************************************/
/*                                                                            */
/* ft_print_combn.c                                                           */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/11 17:30:38 by Xavier.Megnoux                             */
/* Updated: 2025/05/19 22:50:17 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/
#include "../include/ft_print_combn.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void init(int *comb, int n)
{
	int i=0;

	while(i-n)
	{
		comb[i]=i;
		i++;
	}
}

void affichage(int *comb, int n)
{
	int i=0;

	while(i<n)
	{
		ft_putchar('0'+comb[i]);
		i++;
	}
	if(comb[0]!=10-n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void next_comb(int *comb, int n)
{
	int i=n-1;

	while(i>=0 && comb[i]==10-(n-i))
		i--;
	if(i>=0)
	{
		comb[i]++;
		int j=i+1;
		while(j<n)
		{
			comb[j]=comb[j-1]+1;
			j++;
		}
	}
}

void ft_print_combn(int n)
{
	int comb[10];

	init(comb, n);
	while(1)
	{
		affichage(comb, n);
		if(comb[0]==10-n)
			break;
		next_comb(comb, n);
	}
	return;
}
