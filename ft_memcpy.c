/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:16:39 by rchallie          #+#    #+#             */
/*   Updated: 2019/10/21 10:23:04 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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