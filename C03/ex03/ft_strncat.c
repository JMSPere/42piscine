//#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
/*
int	main(void)
{	
	char	*str = "Bonyiga";
	char	*str1;
	char	*str2 = " complexa";
	int	n = 3;

	str1 = malloc(sizeof(str2));
	strcpy(str1, str);
	for (int i = 0; i < strlen(str1); i++)
	{
		printf("%c", str1[i]);
		if (str1[i] == '\0')
			printf("NULL");
	}	
	printf("\n");
	//printf("%s\n", ft_strncat(str1, str2, n));
	str1 = ft_strncat(str1, str2, n);
	for (int i = 0; i < strlen(str1); i++)
	{
		printf("%c", str1[i]);
		if (str1[i] == '\0')
			printf("NULL");
	}
	printf("\n");
	return (0);
}
*/
