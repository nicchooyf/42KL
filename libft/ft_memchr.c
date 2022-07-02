#include <stddef.h>

void *ft_memchr(const void *str, int c, size_t n)
{
	int i;
	unsigned char *p;

	i = -1;
	p = (unsigned char *) str;
	while (++i < n)
	{
		if (*p++ == (char) c)
			return (p - 1);
	}
	return NULL;
}

// #include <stdio.h>
// #include <string.h>

// int main () {
//    const char str[] = "http://www.tutorialspoint.com";
//    const char str2[] = "http://www.tutorialspoint.com";
//    const char ch = '.';
//    char *ret;
//    char *ret2;

//    ret = memchr(str, ch, strlen(str));
//    ret2 = ft_memchr(str2, ch, strlen(str2));

//    printf("String after |%c| is - |%s|\n", ch, ret);
//    printf("String after |%c| is - |%s|\n", ch, ret2);

//    return(0);
// }