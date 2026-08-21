#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void *ft_memset(void *b, int c, size_t len){

	size_t i;
	unsigned char *ptr;

	i = 0;
	ptr = (unsigned char *) b;

	while (i < len){

	    ptr[i] = (unsigned char) c;
	    i++;
	}

	return(b);
}


int main(){

	char ime[] = "MITROVICMARKO";
	int i;



	printf("This is before memset: %s\n", ime);

	ft_memset(ime + 5, 0, 3);
	printf("This is after memset: %s\n", ime);

	i = 0;
	while (i < 14)
	{
	    printf("Position %d: ASCII is %d\n", i, ime[i]);
	    printf("Position %d: character is %c\n", i, ime[i]);
	    i++;
	}
	return(0);
}