#include "libft.h"

int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	    c += 32;
	return (c);
}
/*
int main(){
	char c = 'V';
	char result = ft_tolower(c);
	printf("this is small %c after function %c\n", c, result);
}
	*/