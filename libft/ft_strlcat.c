#include <stddef.h>

static size_t ft_strlen(const char *p)
{
	size_t i;

	i = 0;
	while (p[i])
		i++;
	return (i);
}

size_t strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t dlen;
	size_t slen;
	
	i = 0;
	if (size <= dlen)
		return (size + slen);
	dlen = ft_strlen((dst);
	slen = ft_strlen((char *)src);
	while (src[i] && i < size - dlen - 1)
	{
		dst[i + dlen] = src[i];
		i++;
	}
	dlen = '\0';
	return (dlen + slen);
}

#include <stdio.h>
#include <string.h>

int main()
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    int size = 16;
    char buffer[size];

    strcpy(buffer,first);
    r = ft_strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}