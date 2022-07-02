#include <stddef.h>

static size_t ft_strlen(char *p)
{
	size_t i;

	i = 0;
	while (p[i])
		i++;
	return (i);
}

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	int i;
	size_t s_len;

	i = 0;
	s_len = ft_strlen((char *) src);
	while (src[i] && i < (int) size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (s_len);
}

// #include <stdio.h>
// #include <string.h>

// #define a_size 12
// #define cpy_size 10

// int main () {
//    char src[40];
//    char dest[a_size];
  
//    memset(dest, '\0', sizeof(dest));
//    strcpy(src, "This is tutorialspoint.com");
//    int i = ft_strlcpy(dest, src, cpy_size);

//    printf("dest: %s\nreturn: %d\n", dest, i);
   
//    return(0);
// }