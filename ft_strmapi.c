/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:41:50 by isouali           #+#    #+#             */
/*   Updated: 2021/11/18 10:26:39 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*p;
	unsigned int		i;

	i = 0;
	if (!s)
		return (0);
	p = malloc(ft_strlen(s) + 1);
	if (!p)
		return (p);
	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
