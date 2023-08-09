//#include <string.h>
//#include <stdio.h>

int	ft_strncmp(char *str1, char *str2, int n)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0'
		&& str1[i] == str2[i] && i < n)
		i++;
	return (str1[i] - str2[i]);
}
/*
int	main(void)
{
	int	n = 6;
	char	*str1 = "Pbtata";
	char	*str2 = "Patata";

	printf("%d\n", ft_strncmp(str1, str2, n));
	return (0);
}
*/
