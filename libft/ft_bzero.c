#include <stddef.h>

void ft_bzero(void *s, int nbyte)
{
	size_t	i;
	char *p;
	char *tmp;

	i = (size_t) nbyte;
	p = s;
	tmp = p;
	while (i > 0)
	{
		*tmp = '\0';
		i--;
	}
}

// #include <stdlib.h>
// #include <string.h>

// int main( void )
//   {
//     char buffer[80];

//     ft_bzero( buffer, 80 );
//     return EXIT_SUCCESS;
//   }