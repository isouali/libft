/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <isouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:43:45 by isouali           #+#    #+#             */
/*   Updated: 2021/11/07 12:51:35 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size )
{
	int				i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = (int)size - 1;
	if (d == NULL && s == NULL)
		return (NULL);
	if (s < d)
	{
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	else
		ft_memcpy(dest, src, size);
	return (dest);
}
/*int main()
{
 	char     s[30] = "abcdefgh";
 	char	d[20] = "xyz";
 	size_t size;
 	size_t	i;

 	size = 4;
 	i = 0;
 	memmove(d, s, size);
 	printf("%s\n",d);
}*/
