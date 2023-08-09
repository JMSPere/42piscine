/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:18:09 by pemateu-          #+#    #+#             */
/*   Updated: 2023/07/12 13:48:22 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_assign(int vec[10], int n)
{
	int	i;

	i = 0;
	if (n > 0 || n < 10)
	{
		while (i < n)
		{
			vec[i] = i;
			i++;
		}
	}
}

void	ft_print_vec(int vec[10], int n)
{
	char	c;
	int		i;

	i = 0;
	while (i < n)
	{
		c = vec[i] + '0';
		write(1, &c, 1);
		i++;
	}
	if (vec[0] != 10 - n)
	{
		write(1, ", ", 2);
	}
}

int	ft_carry(int vec[10], int n, int pos)
{
	if (pos == 0)
	{
		vec[0]++;
		return (0);
	}
	else if (vec[pos] == 10 - (n - pos))
	{
		ft_carry(vec, n, pos - 1);
		vec[pos] = vec[pos - 1] + 1;
	}
	else if (pos != (n - 1))
	{
		vec[pos]++;
	}
	return (0);
}

int	ft_update(int vec[10], int n, int pos)
{
	if (pos == 0 && vec[pos] == 10 - (n - pos))
	{
		return (0);
	}
	else if (pos != 0 && vec[pos] < 10 - (n - pos))
	{
		vec[pos]++;
		ft_print_vec(vec, n);
		ft_update(vec, n, pos);
	}
	else if (pos == n - 1 && vec[pos] == 10 - (n - pos))
	{
		ft_carry(vec, n, n - 1);
		ft_print_vec(vec, n);
		if (vec[0] == 10 - n && vec[n - 1] == 9)
		{
			return (0);
		}
		ft_update(vec, n, n - 1);
	}
	return (0);
}

void	ft_print_combn(int n)
{
	int	i;
	int	vec[10];

	i = 0;
	ft_assign(vec, n);
	if (n == 1)
	{
		while (i < 10)
		{
			ft_print_vec(vec, n);
			vec[0]++;
			i++;
		}
	}
	else
	{
		ft_print_vec(vec, n);
		ft_update(vec, n, n - 1);
	}
}
