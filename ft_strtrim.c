/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:29:45 by isouali           #+#    #+#             */
/*   Updated: 2021/11/15 13:41:40 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

static int	ft_checkset(char *set, char c)
{
	int	l;

	l = 0;
	while (set[l])
	{
		if (set[l] == c)
			return (1);
		else
			l++;
	}
	return (0);
}

static char	*ft_isempty(void)
{
	char	*p;

	p = malloc(1);
	p[0] = '\0';
	return (p);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		len;
	int		j;
	int		k;
	char	*str;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_strlen((char *)s1) - 1;
	while (ft_checkset((char *)set, s1[i]) == 1)
		i++;
	while (ft_checkset((char *)set, s1[len]) == 1)
		len--;
	if (i == (int)ft_strlen(s1))
		return (ft_isempty());
	str = (char *)malloc(sizeof(char) * (len - i + 2));
	if (str == NULL)
		return (NULL);
	k = i;
	while (j <= (len - i))
		str[j++] = (char)s1[k++];
	str[j] = '\0';
	return (str);
}
/*int main()
{
	printf("%s\n", ft_strtrim("deffeabcdefedededf", "def"));
	//printf("count : %d\n", start("deffeabcdefedededf", "def"));

}*/
