#include "libft.h"

int ft_strlen(const char *c)
{
	int i;
	
	i = 0;
	while (c[i] != '\0')
	    i++;
	return (i);
}

/*
int main()
{
	char a[20]="program";

	printf("length of program is: %d\n", ft_strlen(a));
	return (0);
}
	*/