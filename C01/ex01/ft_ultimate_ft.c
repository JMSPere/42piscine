/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:08:22 by pemateu-          #+#    #+#             */
/*   Updated: 2023/07/18 18:53:12 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int nbr;
	int *ptr1;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;

	ptr9 = &ptr8;
	ptr8 = &ptr7;
	ptr7 = &ptr6;
	ptr6 = &ptr5;
	ptr5 = &ptr4;
	ptr4 = &ptr3;
	ptr3 = &ptr2;
	ptr2 = &ptr1;
	ptr1 = &nbr;

	ft_ultimate_ft(&ptr8);
	printf("%d\n", nbr);
}

