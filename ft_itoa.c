/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:15:25 by isouali           #+#    #+#             */
/*   Updated: 2021/11/11 18:05:17 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

int sign(int n)
{
    int s;

    s = 1;
    if (n < 0)
        s = -1;
    return (s);
}

long int counter(long int n)
{
	long int	c;

	c = 0;
	if (sign(n) == 1)
		c = 0;
	if (sign(n) == -1)
		c = 1;
	while (n != 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int h)
{
	char	*p;
	long int c;
	long int n;

	n = h;
	c = counter(n);
	if (n == 0 || n == -0)
	{
		p = malloc(2);
		p[0] = 0 + '0';
		p[1] = '\0';
		return (p);
	}
	p = malloc(sizeof(char) * c + 1);
		if (!p)
			return (NULL);
	p[c--] = '\0';
	if (sign(n) == -1)
	{
		p[0] = '-';
		n *= -1; 
	}
	while (n > 0)
	{
		p[c] = (n % 10) + '0';
		n = n / 10;
		c--;
	}
	return (p);
}
/*int main()
{
	printf("%s", ft_itoa(-2147483648));
}*/
