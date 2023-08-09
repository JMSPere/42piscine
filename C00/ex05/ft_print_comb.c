/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:15:19 by pemateu-          #+#    #+#             */
/*   Updated: 2023/07/18 18:02:33 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a == '7' && b == '8' && c == '9')
	{
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_char_assign(char *a, char *b, char *c)
{
	*a = '0';
	*b = '1';
	*c = '2';
}

void	ft_while_loop(char k, char j, char i)
{
	while (!(k == '8'))
	{
		if (i != j && i != k && j != k)
		{
			ft_putchar(k, j, i);
		}
		i++;
		if (i == ':')
		{
			j++;
			if (j <= '8')
			{
				i = j + 1;
			}
			else
			{
				k++;
				j = k + 1;
				i = j + 1;
			}
		}
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	ft_char_assign(&k, &j, &i);
	ft_while_loop(k, j, i);
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
