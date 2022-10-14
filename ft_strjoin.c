/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 01:19:47 by jjesberg          #+#    #+#             */
/*   Updated: 2022/10/15 01:19:50 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char *save, char *buf)
{
    char    *new;
    int     i;
    int     j;
    int     size1;
    int     size2;
   
    j = 0;
    i = 0;
    size1 = ft_strlen(save);
    size2 = ft_strlen(buf);
    new = malloc(sizeof(char) * (size1 + size2 + 1));
    while (i < size1)
    {
        new[i] = save[i];
        i++;
    }
    while (j < size2)
    {
        new[i++] = buf[j++];
    }
    new[i] = '\0';
    free(save);
    return (new);
}
