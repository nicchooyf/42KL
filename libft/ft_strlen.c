#include <stddef.h>

size_t ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int main () {
//    char str[50];

//    strcpy(str, "This is tutorialspoint.com");

//    printf("actual:|%d|\nft_strlen: |%d|\n", strlen(str), ft_strlen(str));
   
//    return(0);
// }