#include "libft.h"

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*

int main(){
	char c = 'v';
	char result = ft_toupper(c);
	printf("this is small %c after function %c\n",c, result);
}
	*/