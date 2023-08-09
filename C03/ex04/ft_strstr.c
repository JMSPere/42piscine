//#include <stdio.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	found;

	i = 0;
	found = 0;
	while (str[i] != '\0' && found == 0)
	{
		if (to_find[0] == str[i])
		{
			j = 0;
			while (to_find[j] != '\0' && to_find[j] == str[i + j])
				j++;
			if (to_find[j] == '\0')
				found = 1;
		}
		i++;
	}
	i--;
	if (found == 0)
		return (NULL);
	return (str + i);
}
/*
int	main(void)
{
	char	*haystack = "a la ata sovint hi pot haver alguna paata i mes";
	char	*needle = "patata";

	printf("%s\n", ft_strstr(haystack, needle));
	return (0);
}
*/
