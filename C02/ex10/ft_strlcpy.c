/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:13:55 by pemateu-          #+#    #+#             */
/*   Updated: 2023/07/25 14:03:14 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
*/
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (ft_strlen(src));
}
/*
int main(void)
{
    char *str = "Aixo es un string";
    char *str3;
    int n = 10;

	str3 = malloc (strlen(str) * sizeof(char));
    printf("%lu\n", strlcpy(str3, str, n));
    printf("%s\n", str3);
    for(int i = 0; i < n; i++)
    {
        if (str3[i] == '\0')
        {
            printf("caracter buit\n");
        }
    }
    free(str3);
    return (0);
}*/
