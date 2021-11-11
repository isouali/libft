/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <isouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:49:46 by isouali           #+#    #+#             */
/*   Updated: 2021/11/07 12:49:30 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	s = (unsigned char *) s1;
	d = (unsigned char *) s2;
	if (n > 0)
	{
		while (i < n)
		{
			if (s[i] != d[i])
				return ((unsigned char)s[i] - (unsigned char)d[i]);
			i++;
		}
	}
	return (0);
}
