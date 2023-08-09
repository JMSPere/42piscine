/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:54:01 by pemateu-          #+#    #+#             */
/*   Updated: 2023/07/13 14:24:54 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

void	ft_putnbr_pretty(int nb, int nb2)
{
	if (nb < 10)
	{
		ft_putchar('0');
	}
	ft_putnbr(nb);
	ft_putchar(' ');
	if (nb2 < 10)
	{
		ft_putchar('0');
	}
	ft_putnbr(nb2);
	if (!(nb == 98 && nb2 == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	nb;
	int	nb2;

	nb = 0;
	nb2 = 1;
	while (nb2 <= 99)
	{
		if (nb != nb2)
		{
			ft_putnbr_pretty(nb, nb2);
		}
		nb2++;
		if (nb2 == 100)
		{
			nb++;
			nb2 = nb + 1;
		}
	}
}
