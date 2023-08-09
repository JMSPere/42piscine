/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:13:42 by pemateu-          #+#    #+#             */
/*   Updated: 2023/07/17 17:21:09 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	*ptr;

	i = 0;
	ptr = tab;
	while (i < size - 1)
	{
		ptr++;
		i++;
	}
	i = 0;
	while (i < size / 2)
	{
		tmp = *ptr;
		*ptr = *tab;
		*tab = tmp;
		ptr--;
		tab++;
		i++;
	}
}
/*
int main(void)
{
	int	size;
	int tab[5] = {1, 2, 3, 4, 5};
	//int *ptr;

	size = 5;
	//ptr = tab;
	ft_rev_int_tab(tab, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", tab[i]);
	}
	return (0);
}
*/