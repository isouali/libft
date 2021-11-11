/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <isouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:43:24 by isouali           #+#    #+#             */
/*   Updated: 2021/11/07 12:40:29 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size )
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (d == NULL && s == NULL)
		return (NULL);
	while (size > i)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
// int main()
// {
// 	int	d[] = {3, 5, 7, 3};
// 	int s[] = {4, 3, 2, 1};
// 	size_t size;
// 	size_t	i;

// 	size = 3;
// 	i = 0;
// 	ft_memcpy(d, s, size);
// 	while (i <= size)
// 	{
// 		printf("%d, ", d[i++]);
// 	}
// }
