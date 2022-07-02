#include <stddef.h>

void *ft_memcpy(void *dest, const void * src, size_t n)
{
	int i;
	unsigned char *p;
	unsigned char *d;
	unsigned char *tmp;

	i = -1;
	p = (unsigned char *) src;
	d = dest;
	tmp = d;
	while (++i < n)
		*tmp++ = *p++;
	return d;
}

// #include <stdio.h>
// #include <string.h>

// int main () {
//    const char src[50] = "http://www.tutorialspoint.com";
//    char dest[50];
//    strcpy(dest,"Heloooo!!");
//    printf("Before memcpy dest = %s\n", dest);
//    ft_memcpy(dest, src, strlen(src)+1);
//    printf("After memcpy dest = %s\n", dest);
   
//    return(0);
// }