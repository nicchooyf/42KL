/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchoo <nchoo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:13:16 by nchoo             #+#    #+#             */
/*   Updated: 2022/07/04 13:09:24 by nchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// [---str1---]
// 		[---str2---]
//
// [---str2---]
// 		[---str1---]

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*tmp;
	unsigned char	*tmp2;

	p = (unsigned char *) str2;
	tmp = str1;
	tmp2 = p;
	if (str2 > str1)
	{
		i = -1;
		while (++i < n)
			*tmp++ = *p++;
	}
	else
	{
		i = n;
		while (i-- > 0)
			tmp[i] = p[i];
	}
	return (str1);
}
