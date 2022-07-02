#include <stddef.h>

// [---str2---]
//			[---str1---]
//	copy back to front

void *ft_memmove(void *str1, const void *str2, size_t n)
{
	int i;
	unsigned char* p;
	unsigned char* tmp;
	unsigned char* tmp2;

	p = (unsigned char *) str2;
	tmp = str1;
	tmp2 = p;
	if (str2 > str1)
	{
		i = -1;
		while (++i < n && tmp != tmp2)
			*tmp++ = *p++;
	}
	else
	{
		i = (int) n;
		while (--i > 0 && tmp != (tmp2 + n))
			*(tmp + i) = *(p + i);
	}
	return str1;
}

// #include <stdio.h>
// #include <string.h>

// int main (void)
// {
//     char string [] = "stackoverflow";
//     char *third, *fourth;
//     third = string;
//     fourth = string;

//     puts(string);
//     memmove(third+5, third, 7);
//     puts(third);
//     ft_memmove(fourth+5, fourth, 7);
//     puts(fourth);
//     return 0;
// }
