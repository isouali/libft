/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:39:34 by isouali           #+#    #+#             */
/*   Updated: 2021/11/10 14:16:34 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	if(ft_strlen(big) < ft_strlen(little))
		return (0);
	while (big[i] &&  i < len)
	{
		if (ft_strncmp(big + i, little + i, ft_strlen(little) ) == 0)
			return ((char *)big + i);
		else if((ft_strncmp(big + i, little, len) == 0) && ft_strlen(little) < len)
		{;
			return ((char *)big + i);
		}
		i++;
	}
	return (0);
}
