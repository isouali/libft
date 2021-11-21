/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <isouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:50:10 by isouali           #+#    #+#             */
/*   Updated: 2021/11/18 15:47:05 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
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
/*int main()
{
 	int p[] = {1, 2, 3, 4, 5};
	ft_memset(p,1, 2);
 	int o[] = {1, 2, 3, 4, 5};
	memset(o,1,2);
	int i = 0;
	while(i < 5)
	{
		printf("p[%d] >> %d\n",i,p[i]);
		printf("o[%d
		i++;
	}
}*/
