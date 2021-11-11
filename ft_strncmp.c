/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <isouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:14:11 by isouali           #+#    #+#             */
/*   Updated: 2021/11/11 18:36:10 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s, const char *p, size_t l)
{
	int				i;
	int				j;
	unsigned char	*d;
	unsigned char	*b;

	i = 0;
	d = (unsigned char *)s;
	b = (unsigned char *)p;
	if (!d[i] || !b[i])
		return (d[i] - b[i]);
	while (i < (int)l)
	{
		j = d[i] - b[i];
		if (j == 0)
			i++;
		else
			return (j);
		if (!d[i] || !b[i])
			break ;
	}
	return (0);
}
/*
 int main()
 {
 	char	s[] = "abcdef";
 	char	p[] = "abcdefghijklmnop";
 	size_t	l;

 	l = 6;
 	printf("mine : %d\n", ft_strncmp("", "1", 0));
 	printf("%d\n", strncmp("", "1", 0));
}*/
