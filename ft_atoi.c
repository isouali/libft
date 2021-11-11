/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <isouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:40:34 by isouali           #+#    #+#             */
/*   Updated: 2021/11/07 13:24:02 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(const char *str)
{
	int			i;
	long int	n;
	long int	result;

	i = 0;
	n = 1;
	result = 0;
	while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * n);
}
/*#include <string.h>
#include <stdlib.h>
int main()
{
	char *n = "\e06050";
	int i1 = atoi(n);
	int i2 = ft_atoi(n);

	printf("%i,%i",i1,i2);
}*/
