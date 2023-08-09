/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:13:55 by pemateu-          #+#    #+#             */
/*   Updated: 2023/07/25 10:03:15 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main(void)
{
    char *str = "Aixo es un string";
    char *str2;
    int n = 15;

    str2 = malloc (strlen(str) * sizeof(char));
    printf("%s\n", ft_strncpy(str2, str, n));
    for(int i = 0; i < n; i++)
    {
        if (str2[i] == '\0')
        {
            printf("caracter buit\n");
        }
    }
    free(str2);
    return (0);
}*/
