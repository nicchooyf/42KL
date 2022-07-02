#include <stddef.h>

void *ft_memccpy(void *dest, const void * src, int c, size_t count)
{
	int i;
	unsigned char *p;
	unsigned char *tmp;

	i = -1;
	p = (unsigned char *) src;
	tmp = dest;
	while (++i < count)
	{
		*tmp++ = *p++;
		if (*p == (char) c)
		{
			*tmp = *p;
			break;
		}
	}
	return dest;
}

// #include <stdio.h>
// #include <string.h>

// int main () {
//    const char src[50] = "http://www.tutorialspoint.com";
//    char dest[50];
//    strcpy(dest,"Heloooo!!");
//    printf("Before memcpy dest = %s\n", dest);
//    ft_memccpy(dest, src, 'p',strlen(src)+1);
//    printf("After memcpy dest = %s\n", dest);
   
//    return(0);
// }