/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 01:30:39 by jjesberg          #+#    #+#             */
/*   Updated: 2022/10/15 01:30:41 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		cuc;
	unsigned char		*dstc;
	const unsigned char	*srccc;
	size_t				i;

	cuc = (unsigned char)c;
	dstc = (unsigned char *)dst;
	srccc = (const unsigned char*)src;
	i = 0;
	while (i < n)
	{
		dstc[i] = srccc[i];
		if (srccc[i] == cuc)
			return (dst + i + 1);
		i++;
	}
	return (0);
}
