/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <isouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:22:11 by isouali           #+#    #+#             */
/*   Updated: 2021/11/19 22:42:09 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		len;
	char	*temp;

	i = 0;
	len = ft_strlen(src);
	temp = (char *)malloc(len + 1);
	if (!temp)
		return (NULL);
	while (src[i])
	{
		temp[i] = src[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

// int main()
// {
// 	char *tmp;
// 	char src[] = "hello world!";

// 	tmp = ft_strdup(src);
// 	printf("%s", tmp);
// }
