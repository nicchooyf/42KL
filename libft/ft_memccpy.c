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
//    char dest2[50];
//    strcpy(dest,"Heloooo!!");
//    strcpy(dest2,"Heloooo!!");
//    printf("Before memcpy:\ndest = %s\ndest2 = %s\n", dest, dest2);
//    memccpy(dest, src, 'p',strlen(src)+1);
//    ft_memccpy(dest2, src, 'p',strlen(src)+1);
//    printf("After memcpy:\ndest = %s\ndest2 = %s\n", dest, dest2);
   
//    return(0);
// }