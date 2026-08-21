#include "libft.h"


int ft_strlen(const char *c)
{
	int i;
	
	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

char *ft_strdup(const char *s)
{
	char *copy;
	int i;
	int len;

	len = ft_strlen(s);
	
	copy = malloc((len + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);

	i = 0;
	while (s[i] != '\0')
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*
int main()
{
	char string [] = "MARKO";
	char *duplikat;

	duplikat = ft_strdup(string);

	printf("Ovo je duplikat stringa, %s\n", duplikat);

	free(duplikat);

	return (0);
}
	*/