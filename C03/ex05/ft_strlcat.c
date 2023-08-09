//#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[len + i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[len + i] = '\0';
		i++;
	}
	return (len + ft_strlen(src));
}
/*
int	main(void)
{	
	char	*str = "Patata";
	char	*str1;
	char	*str2 = " complexa";
	unsigned int	n = 15;
	unsigned int	size;

	str1 = malloc(sizeof(str));
	strcpy(str1, str);
	for (int i = 0; i < strlen(str1); i++)
	{
		printf("%c", str1[i]);
		if (str1[i] == '\0')
			printf(" NULL");
	}	
	printf("\n");
	//printf("%s\n", ft_strncat(str1, str2, n));
	size = ft_strlcat(str1, str2, n);
	for (int i = 0; i < size; i++)
	{
		printf("%c", str1[i]);
		if (str1[i] == '\0')
			printf("NULL");
	}
	printf("\n");
	printf("size is: %u\n", size);
	return (0);
}
*/
