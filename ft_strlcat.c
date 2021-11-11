/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <isouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:27:13 by isouali           #+#    #+#             */
/*   Updated: 2021/11/07 12:53:26 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	s;

	i = 0;
	j = 0;
	while (dst[j])
		j++;
	while (src[i])
		i++;
	if (j >= size)
		s = i + size;
	else
		s = i + j;
	i = 0;
	while (src[i] && (j + 1) < size)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (s);
}
