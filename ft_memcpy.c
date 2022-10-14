/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 01:30:26 by jjesberg          #+#    #+#             */
/*   Updated: 2022/10/15 01:30:28 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dstc;
	const char	*srccc;

	if (dst == src || n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	dstc = dst;
	srccc = src;
	while (n--)
		dstc[n] = srccc[n];
	return (dst);
}

/*
void main()
{
	char *dst;
	char src[6] = "Hallo";

	dst = malloc(sizeof(char) * 6);
	dst = ft_memcpy(dst, src, 6);
	printf("dst= %s\n", dst);
}*/