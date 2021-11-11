/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <isouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:28:02 by isouali           #+#    #+#             */
/*   Updated: 2021/11/11 11:45:30 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>
#include<stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	j;
	unsigned int	i;

	i = 0;
	j = ft_strlen(src);
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}
/*int main()
{
	char	d[] = "hello";
	char	s[] = "rikalo";
	size_t	i;

	i = 1;
	printf("%d", ft_strlcpy(d, s, i));

}*/
