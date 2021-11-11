/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <isouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:50:10 by isouali           #+#    #+#             */
/*   Updated: 2021/11/07 11:14:08 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset( void *pointer, int value, size_t count )
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)pointer;
	while (count > i)
	{
		p[i] = value;
		i++;
	}
	return (pointer);
}
// int main()
// {
// 	int p[] = {1, 2, 3, 4, 5};
// 	int	value;
// 	size_t	count;
// 	int	i;

// 	value = 0;
// 	count = 20;
// 	i = 0;
// 	ft_memset(p, value, count);
// 	while(i < 5)
// 		printf("%d|", p[i++]);

// }
