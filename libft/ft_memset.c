#include <stddef.h>

void *ft_memset(void *str, int c, size_t n)
{
    int i;
    char *p;
    char *tmp;

    p = str;
    tmp = p;
    i = -1;
    while (++i < n)
    {
        *tmp = (char) c;
        tmp++;
    }
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