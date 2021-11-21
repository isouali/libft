/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <isouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:14:11 by isouali           #+#    #+#             */
/*   Updated: 2021/11/17 23:20:24 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s, const char *p, size_t l)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*b;

	i = 0;
	d = (unsigned char *)s;
	b = (unsigned char *)p;
	while (i < l && (d[i] || b[i]))
	{
		if (d[i] != b[i])
			return (d[i] - b[i]);
		i++;
	}
	return (0);
}
/*
 int main()
 {
 	char	s[] = "abcdef";
 	char	p[] = "abcdefx";

 	printf("mine : %d\n", ft_strncmp(s, p, 42));
 	//printf("%d\n", strncmp("", "1", 0));
}*/
