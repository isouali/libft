/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <isouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:17:53 by isouali           #+#    #+#             */
/*   Updated: 2021/11/17 22:57:26 by isouali          ###   ########.fr       */
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
		if ((unsigned char)s[i] == (unsigned char)c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}/*
int main()
{
	char	s[] = {0, 1, 2 ,3 ,4 ,5};
	printf("yours : %s\n", memchr(s, 2 + 256, 3));
	printf("mine : %s", ft_memchr(s, 2 + 256, 3));
}*/
