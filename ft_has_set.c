/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_has_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@mail.abc>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 14:24:04 by jjesberg          #+#    #+#             */
/*   Updated: 2023/04/07 14:29:54 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

int ft_has_set(char *s, char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s || !set)
		return (0);
	while (s[i])
	{
		j = 0;
		while (set[j])
		{
			if (s[i] == set[j])
				return (1);
			j++;
		}
	}
	return (0);
}
