/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:22:34 by pemateu-          #+#    #+#             */
/*   Updated: 2023/07/17 18:44:13 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 1;
	while (i < size)
	{
		if (tab[i] < tab[i - 1])
		{
			ft_swap(&tab[i], &tab[i - 1]);
			i = 0;
		}
		else
			i++;
	}
}
/*
int	main(void)
{
	int tab[5] = {1, 3, 4, 2, 1};
	int tab2[5] = {11, 2, 5, 7, 3};

	ft_sort_int_tab(&tab[0], 5);
	ft_sort_int_tab(&tab2[0], 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", tab2[i]);
	}
	printf("\n");
	return (0);
}
*/
