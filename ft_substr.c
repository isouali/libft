/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:10:42 by isouali           #+#    #+#             */
/*   Updated: 2021/11/11 16:57:38 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	j;\


	i = start;
	j = 0;
	if (!s)
		return (NULL);
	p = malloc((len + 1 ) * (sizeof (char)));
	if (!p)
		return (NULL);
	while (s[i] && j < len && i < ft_strlen(s))
	{
		p[j] = s[i];
		j++;
		i++;
	}
	p[j] = '\0';
	return (p);
}
/*int main()
{
	char *str = "01234";
	size_t size = 10;
	char *ret = ft_substr(str, 10, size);

	printf("%s", ft_substr(str, 5, 4));
}*/
