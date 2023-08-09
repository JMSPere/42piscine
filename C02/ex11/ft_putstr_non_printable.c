/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:50:38 by pemateu-          #+#    #+#             */
/*   Updated: 2023/07/24 19:08:17 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c[3];

	i = 0;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= 0 && *(str + i) <= 31) || *(str + i) == 127)
		{
			c[0] = 92;
			c[1] = (*(str + i) / 16) + '0';
			if ((*(str + i) % 16) % 10 <= 5)
				c[2] = 97 + (*(str + i) % 16) % 10;
			else
				c[2] = 48 + (*(str + i) % 16) % 10;
			ft_putstr(c);
		}
		else
			ft_putchar(*(str + i));
		i++;
	}
}
/*
int	main(void)
{	
	char	*str = "Pat\rata\n que salta\t";

	ft_putstr_non_printable(str);
	return (0);
}*/
