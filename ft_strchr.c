/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <isouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:23:20 by isouali           #+#    #+#             */
/*   Updated: 2021/11/11 19:33:27 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s);
	while (i <= j)
	{
		if (s[i] == c)
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
	printf("%s\n", ft_strchr(s, 't' + 257));
	printf("%s", strchr(s, 't' + 257));
}*/
