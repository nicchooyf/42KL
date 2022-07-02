#include <stddef.h>

void *ft_memset(void *str, int c, size_t n)
{
    int i;
    unsigned char *p;
    unsigned char *tmp;

    int = -1;
    p = str;
    tmp = p;
    while (++i < n)
        *tmp++ = (unsigned char) c;
    return p; 
}

// #include <stdio.h>
// #include <string.h>

// int main (void) 
// {
//    char str[50];

//    strcpy(str,"This is string.h library function");
//    puts(str);

//    ft_memset(str,'$',7);
//    puts(str);
   
//    return(0);
// }