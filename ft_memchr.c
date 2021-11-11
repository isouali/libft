/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <isouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:17:53 by isouali           #+#    #+#             */
/*   Updated: 2021/11/05 16:03:30 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *p, int c, size_t size )
{
	size_t	i;
	char	*s;

	s = (char *)p;
	i = 0;
	while (i < size)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
