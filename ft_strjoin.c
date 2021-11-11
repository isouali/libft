/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:43:41 by isouali           #+#    #+#             */
/*   Updated: 2021/11/11 18:05:31 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	p = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) - 1));
	if (!p)
		return (0);
	while (s1[i])
	{
		p[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		p[j] = s2[i];
		i++;
		j++;
	}
	p[j] = '\0';
	return (p);
}
/*
int main()
{
	printf("%s", ft_strjoin("yahya", " amzil"));
}*/
