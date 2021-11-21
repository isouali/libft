/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <isouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 09:57:49 by isouali           #+#    #+#             */
/*   Updated: 2021/11/21 23:07:15 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

// int	ft_strcounter(char *s, char c)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	while (s[i])
// 	{
// 		if ] == c)
// 		{
// 			j++;
// 			i++;
// 		}
// 		else
// 			i++;
// 		if (s[i] == c)
// 			i++;
// 	}		
// 	if (s[--i] == c)
// 		return (j);
// 	return (j + 1);
// }
int	ft_strcounter(char *s, char c)
{
	int i;
	int count;
		
	count = 0;
	while (*s)
	{
		i = 0;
		while (*s == c && *s)
			s++;
		while (s[i])
		{
			i++;
			if (!s[i] || s[i] == c)
			{
				++count;
				break ;
			}
		}
		s += i;
	}
	return (count);
}

void	ft_free(char **ret, int x)
{
	while (x >= 0)
	{
		free(ret[x]);
		--x;
	}
}

int ft_counter(char *s, char c, char **ret)
{
	int	i;
	int	x;

	x = 0;
	while (*s)
	{
		i = 0;
		while (*s == c && *s)
			s++;
		while (s[i])
		{
			i++;
			if (!s[i] || s[i] == c)
			{
				ret[x] = ft_substr(s, 0, i);
				if (!ret[x])
				{
					ft_free(ret, x - 1);
					return 0;
				}
				x++;
				break;
			}
		}
		s += i;
	}
	return (1);
}

char **ft_split(char const *s, char c)
{
	char	**p;
	int		count;

	if (!s)
		return (NULL);
	count = ft_strcounter((char *)s, c);
	p = (char **)malloc(sizeof(char *) * (count + 1));
	if (!p)
		return (NULL);
	if(ft_counter((char *)s, c, p) == 0) 
	{
		free(p);
		return(NULL);
	}
	p[count] = NULL;
	return (p);
}

// int main()
// {
// 	int br = 1;
// 	while(br);
// 	int i = 0;
// 	char **s = ft_split("tripouille", 0);
// 	while (s[i])
// 	{
// 		printf("|%s|\n", s[i]);
// 		i++;
// 	}
// 	// printf("|%s|\n", s[i]);
	
// }	
