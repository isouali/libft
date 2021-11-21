/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <isouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:23:20 by isouali           #+#    #+#             */
/*   Updated: 2021/11/18 16:33:38 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>
#include<stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s);
	while (i <= j)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
		{
			return ((char *)&s[i]);
		}
		else
			i++;
	}
	return (NULL);
}
/*int main()
{
	const char	s[] = "tripouille";
	int c;	
	c = 'l';
	printf("%s\n", ft_strchr(s, '\0'));
	printf("%s", strchr(s, '\0'));
}*/
