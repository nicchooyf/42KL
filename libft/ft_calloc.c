/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchoo <nchoo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:56:40 by nchoo             #+#    #+#             */
/*   Updated: 2022/07/05 16:12:34 by nchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*res;
	size_t	total;

	total = (n * size);
	if (size >= sizeof(size_t))
		return (NULL);
	res = malloc(n * size);
	if (!res)
		return (NULL);
	ft_bzero(res, (n * size));
	return (res);
}
