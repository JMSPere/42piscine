/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:47:14 by pemateu-          #+#    #+#             */
/*   Updated: 2023/07/18 17:13:25 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
*/
char	*ft_strcpy(char *dest, char *src)
{
	char	*tmp;

	tmp = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
	return (tmp);
}
/*
int	main(void)
{
	char	*str1 = "Patata";
	char	*str2;

	str2 = malloc(sizeof(str1));
	str2 = ft_strcpy(str2, str1);
	for (int i = 0; i < 6; i++)
	{
		printf("%c", *str2);
		str2++;
	}
	return (0);
}
*/