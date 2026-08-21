
#include "libft.h"



char *ft_strnstr(const char *big,	const char *little, size_t len)
{
	size_t i;
	size_t j;

	if (little[0] == '\0')
	{
		return ((char *)big);
	}

	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len && little[j] != '\0')
		{
		    j++;
		}
		if (little[j] == '\0')
		{
		    return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char big[] = "Nemam pojma gde je kljuc";
	char little[] = "kljuc";

	printf("Test 1 (len=25): %s\n", ft_strnstr(big, little, 26));

	return (0);
}

*/
